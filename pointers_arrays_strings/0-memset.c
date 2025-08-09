#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 * @s: Adress of memory 
 * @b: A constant byte
 * @n: Number of bytes
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
 
