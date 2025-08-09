#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - Function locates the first occurrence in the string
 * @s: String
 * @accept: string with characters to match
 *
 * Return: pointer to first match, or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
