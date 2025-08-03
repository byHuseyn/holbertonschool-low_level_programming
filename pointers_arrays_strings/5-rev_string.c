#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j;
	char tmp;

	while (s[i] != '\0')
		i++;

	for (j = 0; j < i / 2; j++)
	{
		tmp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = tmp;
	}
}
