#include <stdio.h>
#include "main.h"

/**
 * print_sign - function entry point.
 * Description - function that prints the sign of a number.
 * @n: Number Input.
 * Return: 1 if n is greather than zero, 0 if n is zero, -1 is less than zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	else if (n == 0)
	{
		_putchar('0');
	}
}
