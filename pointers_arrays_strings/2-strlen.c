#include "main.h"

/**
 * _strlen - Returns length of string
 * @s: Input string
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
