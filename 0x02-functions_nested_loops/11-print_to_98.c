#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function entry point.
 * Description - function that prints all natural numbers from n to 98.
 * @n: Input.
 * Return: list of numbers.
 */

void print_to_98(int n)
{
	int num;

	num = 98;

	if (n < num)
	{
		while (n <= num)
		{
			_putchar(num);
			if (n != num)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		n++;
	}
	else if (n < num)
	{
		while (n >= num)
		{
			_putchar(n);
			if (n != num)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	else
	{
		_putchar(num);
	}
	_putchar('\n');
}
