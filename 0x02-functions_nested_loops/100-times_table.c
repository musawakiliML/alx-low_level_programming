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
				formatfunc(num);
			}
			_putchar('\n');
		}
	}
}


/**
 * formatfunc - Entry point
 * Description - function for formatting output
 * @n: Input
 * Return: void(Nothing)
 */

void formatfunc(int n)
{
	if (n <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
