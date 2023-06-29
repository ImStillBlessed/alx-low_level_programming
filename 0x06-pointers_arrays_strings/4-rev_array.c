#include "main.h"
/**
 * reverse_array - reverses the integers in the array
 * @a: is the array
 * @n: number osf elements in the array
 * Return: the new reversed array
*/
void reverse_array(int *a, int n)
{
    int temp, i;

    for (i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
    
}