#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: The character to check (ASCII code)
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
