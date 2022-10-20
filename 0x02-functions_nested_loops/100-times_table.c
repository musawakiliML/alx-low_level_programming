#include <stdio.h>
#include "main.h"

/**
 * print_times_table - function entry point.
 * Description - function that prints the n times table, starting with 0.
 * @n: Input
 * Return: times table
 * with extra space after each digit
 */

void print_times_table(int n)
{
	int row, column, num;

	if (n > 15 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row <= n; row++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');

			for (column = 1; column <= n; column++)
			{
				num = (row * column);
				if ((num / n) > 0)
				{
					_putchar((num / n) + '0');
				}
				else
				{
					_putchar(' ');
				}
				_putchar((num % n) + '0');

				if (column < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
