#include "main.h"
/**
 * more_numbers: Prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void);
{
	int i;
	int h;

	for (i = 0; i < 10; i++)
	{
		for (h = 0; h <= 14; h++)
		{
			if ( >= 10)
				_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
		}
		_putchar('\n');
	}
}
