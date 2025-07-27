#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char c;
	char c_upper;

	for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}

	for (c_upper = 'A'; c_upper <= 'Z'; c_upper++)
{
	putchar(c_upper);
}

	putchar("\n");

	return (0);
}	
