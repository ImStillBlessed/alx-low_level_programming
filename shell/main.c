#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void)
{
	pid_t ppid, pid;

	pid = getpid();
	ppid = getppid();
	printf("ppid: %u, pid: %u\n", ppid, pid);
	return (0);
}
