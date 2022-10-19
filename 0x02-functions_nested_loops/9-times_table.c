#include <stdio.h>
#include "main.h"

/**
 * times_table - function entry point.
 * Description - function that prints the 9 times table, starting with 0.
 * Return: times table
 * with extra space after each digit
 */

void times_table(void)
{
	int row, column, num;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (column = 1; column <= 9; column++)
		{
			num = (row * column);
			if ((num / 10) > 0)
			{
				_putchar((num / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((num % 10) + '0');

			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
