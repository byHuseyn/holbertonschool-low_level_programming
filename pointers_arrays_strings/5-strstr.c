#include "main.h"
#include <stdio.h>
/**
 * _strstr - finds a substring
 * @haystack: the main string
 * @needle: the substring to search
 *
 * Return: pointer to beginning of located substring, or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
			;
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
