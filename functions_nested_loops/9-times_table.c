#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, h, timetable;

	for (i = 0; i <= 9; i++)
	{
		for (h = 0; h <= 9; h++)
		{
			timetable = i * h;

			if (h == 0)
				_putchar(timetable + '0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (timetable < 10)
				{
					_putchar(' ');
					_putchar(timetable + '0');
				}
				else
				{
					_putchar((timetable / 10) + '0');
					_putchar((timetable % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
