#include "main.h"

/**
 * print_number - a function to  print an integer
 * @n : input
 * Return : 0 Always (Sucess)
*/
void print_number(int n)
{
	int a;

	if (n < 0)
	{
		a = -n;
		_putchar('-');
	}
	else
	{
		a = n;

	}

	if (a / 10)
	{
		print_number(x / 10);
	}
	_putchar((a % 10) + '0');
}
