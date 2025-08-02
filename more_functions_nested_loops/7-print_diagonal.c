#include "main.h"
/**
 * print_diagonal - Draws a diagonal line of length n
 * @n: Number of times '\' should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int h;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (h = 0; h < i; h++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
