#include "main.h"
#include <stdlib.h>
/**
 * _strchr - Function first occurrence of the character
 * @s: string
 * @c: searching symbol
 *
 * Return: c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
		return (s);
	return (NULL);
}
