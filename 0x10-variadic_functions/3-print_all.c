#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>

void print_all(const char * const format, ...)
{
	char *formats = {"c", "i", "f", "s"};

/*
	va_list(args);
	va_start(args, format);
*/
	printf("%s\n", formats);
}
