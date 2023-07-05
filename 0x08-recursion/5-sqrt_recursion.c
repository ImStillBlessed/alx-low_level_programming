#include "main.h"
/** 
* _sqrt_recursion_helper - performs the recursion activity
* _sqrt_recursion - is the main square root function
* @n: number to find the square root
* @start: first number in range to search
* @end: last number in range to search
* Return: the square root.
*/
int _sqrt_recursion_helper(int n, int start, int end) 
{
    if (start > end) 
        return (-1);
    int mid = (start + end) / 2;
    
    if (mid * mid == n) 
        return (mid);
    if (mid * mid < n)
        return (_sqrt_recursion_helper(n, mid + 1, end));
    else
        return (_sqrt_recursion_helper(n, start, mid - 1));
}

int _sqrt_recursion(int n) 
{
    if (n < 0)
        return (-1);
    if (n == 0 || n == 1)
        return n;
	return _sqrt_recursion_helper(n, 1, n);
}
 
