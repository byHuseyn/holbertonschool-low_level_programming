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
	char *h, *n;

	if (needle == '\0')
		return (haystack);
	while (*haystack)
	{
		h = haystack;
		n = needle;
		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
