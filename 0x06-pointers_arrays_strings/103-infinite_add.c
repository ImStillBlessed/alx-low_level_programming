#include <stdio.h>
#include <string.h>

/**
 * infinite_add - this function adds two numbers together
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the results
 * @size_r: the size of the buffer
 * Return: a pointer to the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int i = strlen(n1) - 1;
	int j = strlen(n2) - 1;
	int k = 0;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		int digit1 = (i >= 0) ? n1[i--] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j--] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		carry = sum / 10;
		r[k++] = sum % 10 + '0';
	}

	if (k >= size_r)
		return 0;

	r[k] = '\0';

	for (int left = 0, right =k - 1 ; left < right ; left++, right--)
	{
		char temp = r[left];

		r[left] = r[right];
		r[right] = temp;
	}

	return r;
}
