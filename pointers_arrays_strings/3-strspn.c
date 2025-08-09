#include "main.h"
/**
 * _strspn - Return number bytes  in the initial segmen
 * @accept: Bytes from initial segment
 * @s: Checked string
 *
 * Return: Numbers of Symbol
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, found;

	while (*s)
	{
		found = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}

		if (!found)
			break;
		count++;
		s++;
	}
	return (count);
}
