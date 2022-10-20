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
		return;
	}
	else
	{
		for (row = 0; row <= n; row++)
		{
			_putchar('0');

			for (column = 1; column <= n; column++)
			{
				num = (row * column);
				if (num <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(num + '0');
				}
				else if (num > 9 && num <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(num / 10 + '0');
					_putchar(num % 10 + '0');
				}

				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(num / 100 + '0');
					_putchar(num / 10 % 10 + '0');
					_putchar(num % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
