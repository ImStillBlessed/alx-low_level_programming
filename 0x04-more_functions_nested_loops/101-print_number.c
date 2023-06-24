#include "main.h"

/**
 * print_number - prints integer
 * @n: number to be printed
 * Return: void
 */
void print_number(int n)
{
        if (n < 0)
        {
                n = -n;
                _putchar('-');
        }

        if (n / 10 != 0)
                print_number(n / 10);

        _putchar('0' + n % 10);
}
