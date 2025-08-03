#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: Input string
 *
 * Return: Length of string as integer
 */
int _strlen(char *s);
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
