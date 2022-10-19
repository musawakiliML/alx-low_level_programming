#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function entry point.
 * Description - function that prints the last digit of a number.
 * @n: Input.
 * Return: value of the last digit n.
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = (n % 10);
	if (last_digit < 0)
	{
		last_digit = (-1 * last_digit);
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
