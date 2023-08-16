#!/usr/bin/env perl
# (c) 2001, Dave Jones. (the file handling bit)
# (c) 2005, Joel Schopp <jschopp@austin.ibm.com> (the ugly bit)
# (c) 2007,2008, Andy Whitcroft <apw@uk.ibm.com> (new conditions, test suite)
# (c) 2008-2010 Andy Whitcroft <apw@canonical.com>
# Licensed under the terms of the GNU GPL License version 2

use strict;
use warnings;
use POSIX;
use File::Basename;
use Cwd 'abs_path';
use Term::ANSIColor qw(:constants);

my $P = $0;
my $D = dirname(abs_path($P));

my $V = '0.32';

use Getopt::Long qw(:config no_auto_abbrev);

my $quiet = 0;
my $tree = 0;
my $chk_signoff = 1;
my $chk_patch = 1;
my $tst_only;
my $emacs = 0;
my $terse = 1;
my $showfile = 0;
my $file = 1;
my $git = 0;
my %git_commits = ();
my $check = 0;
my $check_orig = 0;
my $summary = 1;
my $mailback = 0;
my $summary_file = 0;
my $show_types = 0;
my $list_types = 0;
my $fix = 0;
my $fix_inplace = 0;
my $root;
my %debug;
my %camelcase = ();
my %use_type = ();
my @use = ();
my %ignore_type = ();
my @ignore = ();
my $help = 0;
my $printVersion = 0;
my $configuration_file = ".checkpatch.conf";
my $max_line_length = 80;
my $max_func_length = 40;
my $max_funcs = 5;
my $safe_guard = 1;
my $allow_global_variables = 0;
my $ignore_perl_version = 0;
my $minimum_perl_version = 5.10.0;
my $min_conf_desc_length = 4;
my $spelling_file = "$D/spelling.txt";
my $codespell = 0;
my $codespellfile = "/usr/share/codespell/dictionary.txt";
my $color = 1;
my $recursive = 0;

sub printVersion {
	my ($exitcode) = @_;

	print << "EOM";
Version: $V
EOM
	exit($exitcode);
}

sub help {
	my ($exitcode) = @_;

	print << "EOM";
Usage: $P [OPTION]... [FILE]...
Version: $V

Options:
  -q, --quiet                Quiet mode
  --tree                     Run with a kernel tree.
  --no-signoff               Do not check for 'Signed-off-by' line
  --patch                    Treat FILE as patchfile (default)
  --emacs                    Emacs compile window format
  --no-terse                 Disable one line per report.
  --showfile                 Emit diffed file position, not input file position
  -g, --git                  Treat FILE as a single commit or git revision range
                             Single git commit with:
                               <rev>
                               <rev>^
                               <rev>~n
                             Multiple git commits with:
                               <rev1>..<rev2>
                               <rev1>...<rev2>
                               <rev>-<count>
                             Git merges are ignored
  --no-file                  Don't treat FILE as regular source file.
  --subjective, --strict     Enable more subjective tests
  --list-types               List the possible message types
  --types TYPE(,TYPE2...)    Show only these comma separated message types
  --ignore TYPE(,TYPE2...)   Ignore various comma separated message types
  --show-types               Show the specific message type in the output
  --min-conf-desc-length=n   Set the min description length, if shorter, warn
  --root=PATH                PATH to the kernel tree root
  --no-summary               Suppress the per-file summary
  --mailback                 Only produce a report in case of warnings/errors
  --summary-file             Include the filename in summary
  --debug KEY=[0|1]          Turn on/off debugging of KEY, where KEY is one of
                             'values', 'possible', 'type', and 'attr' (default
                             is all off)
  --test-only=WORD           Report only warnings/errors containing WORD
??? from here until ???END lines may have been inserted/deleted
                             literally
  --fix                      EXPERIMENTAL - may create horrible results
                             If correctable single-line errors exist, create
                             "<inputfile>.EXPERIMENTAL-checkpatch-fixes"
                             with potential errors corrected to the preferred
                             checkpatch style
  --fix-inplace              EXPERIMENTAL - may create horrible results
                             Is the same as --fix, but overwrites the input
                             file.  It's your fault if there's no backup or git
  --ignore-perl-version      Override checking of perl version.  expect
                             runtime errors.
  --codespell                Use the codespell dictionary for spelling/typos
                             (default:/usr/share/codespell/dictionary.txt)
  --codespellfile            Use this codespell dictionary
  --color                    Use colors when output is STDOUT (default: on)

  --max-line-length=n        Set the maximum length of a line (default: 80)
  --max-func-length=n        Set the maximum length of a function (default: 40)
  --max-funcs=n              Set the maximum declared functions per source file
                             (default: 5)
                             Set it to -1 for infinite
  --no-safe-guard            Don't check for header files protection
  --allow-global-variables   Allow global variable definition
  -r, --recursive            Run for every C source file (.c and .h) recursively

  -h, --help, --version      Display this help and exit

When FILE is - read standard input.
EOM

	exit($exitcode);
}

sub uniq {
	my %seen;
	return grep { !$seen{$_}++ } @_;
}

sub list_types {
	my ($exitcode) = @_;

	my $count = 0;

	local $/ = undef;

	open(my $script, '<', abs_path($P)) or
	    die "$P: Can't read '$P' $!\n";

	my $text = <$script>;
	close($script);

	my @types = ();
	for ($text =~ /\b(?:(?:CHK|WARN|ERROR)\s*\(\s*"([^"]+)")/g) {
		push (@types, $_);
	}
	@types = sort(uniq(@types));
	print("#\tMessage type\n\n");
	foreach my $type (@types) {
		print(++$count . "\t" . $type . "\n");
	}

	exit($exitcode);
}

my $conf = which_conf($configuration_file);
if (-f $conf) {
	my @conf_args;
	open(my $conffile, '<', "$conf")
	    or warn "$P: Can't find a readable $configuration_file file $!\n";

	while (<$conffile>) {
		my $line = $_;

		$line =~ s/\s*\n?$//g;
		$line =~ s/^\s*//g;
		$line =~ s/\s+/ /g;

		next if ($line =~ m/^\s*#/);
		next if ($line =~ m/^\s*$/);

		my @words = split(" ", $line);
		foreach my $word (@words) {
			last if ($word =~ m/^#/);
			push (@conf_args, $word);
		}
	}
	close($conffile);
	unshift(@ARGV, @conf_args) if @conf_args;
}

GetOptions(
	'q|quiet+'	=> \$quiet,
	'tree!'		=> \$tree,
	'signoff!'	=> \$chk_signoff,
	'patch!'	=> \$chk_patch,
	'emacs!'	=> \$emacs,
	'terse!'	=> \$terse,
	'showfile!'	=> \$showfile,
	'file!'		=> \$file,
	'g|git!'	=> \$git,
	'subjective!'	=> \$check,
	'strict!'	=> \$check,
	'ignore=s'	=> \@ignore,
	'types=s'	=> \@use,
	'show-types!'	=> \$show_types,
	'list-types!'	=> \$list_types,
	'min-conf-desc-length=i' => \$min_conf_desc_length,
	'root=s'	=> \$root,
	'summary!'	=> \$summary,
	'mailback!'	=> \$mailback,
	'summary-file!'	=> \$summary_file,
	'fix!'		=> \$fix,
	'fix-inplace!'	=> \$fix_inplace,
	'ignore-perl-version!' => \$ignore_perl_version,
	'debug=s'	=> \%debug,
	'test-only=s'	=> \$tst_only,
	'codespell!'	=> \$codespell,
	'codespellfile=s'	=> \$codespellfile,
	'color!'	=> \$color,
	'h|help'	=> \$help,
???END
