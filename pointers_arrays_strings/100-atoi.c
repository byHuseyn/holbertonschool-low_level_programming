#include "main.h"

/**
 * _atoi - Converts a string to integer
 * @s: Input string
 *
 * Return: Integer value
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0, found = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			found = 1;
		}
		else if (found)
			break;
		i++;
	}
	return (result * sign);
}
