#include "main.h"

/**
 * _isdigit - Check if c is a digit
 * @c: ASCII value character (0-9 is a digit)
 *
 * Return: If c is a digit 1, otherwise 0
 */

int _isdigit(int c)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
