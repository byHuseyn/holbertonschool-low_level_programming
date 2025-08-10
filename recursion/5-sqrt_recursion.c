#include "main.h"

/**
 * sqrt_helper - Helper function to find square root
 * @n: Number
 * @i: Possible square root
 *
 * Return: Natural square root or -1
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number
 *
 * Return: Square root or -1 if none
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}
