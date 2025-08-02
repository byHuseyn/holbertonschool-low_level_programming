#include "main.h"
/**
 * print_triangle - Use the # character to print the triangle
 * @size: is the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int r, s, h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (s = 0; s < size - r; s++)
			{
				_putchar(' ');
			}
			for (h = 0; h < r; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
