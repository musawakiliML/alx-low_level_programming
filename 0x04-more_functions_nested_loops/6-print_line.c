#include "main.h"

/**
 * print_line - a function that prints line
 * Description - draw line _ n times
 * @n: number of times _ appears
 */
void print_line(int n)
{
	int c;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
