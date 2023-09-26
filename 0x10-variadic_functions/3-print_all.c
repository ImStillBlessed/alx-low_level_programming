#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>

/**
 * print_all - prints all the values presented to it
 * @format: the format of the values to be printed
 * Return: nothing.
 */

void print_all(const char * const format, ...)
{
	int val = 0;
	char *str, *seperator = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[val])
		{
			switch (format[val])
			{
				case 'c':
					printf("%s%c", seperator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", seperator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", seperator, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "nil";
					printf("%s%s", seperator, str);
					break;
				default:
				val++;
				continue;
			}
			seperator = ", ";
			val++;
		}
	}
	printf("\n");
	va_end(args);
}
