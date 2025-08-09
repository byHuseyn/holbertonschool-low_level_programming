#include "main.h"
/**
 * _memcpy - Copies function
 * @dest: Target memory area
 * @src: Memory area
 * @n: Number of copied bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		dest[z] = src[z];
	}

	return (dest);
}
