#include "main.h"

/**
 * print_diagonal - Function entry point
 * Description - function that draws a diagonal
 * line on the terminal.
 * @n: number input
 */
void print_diagonal(int n)
{
	int a, b;

	a = 0;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (; n > 0; n--)
		{
			b = a;
			for (; b > 0; b--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
}
