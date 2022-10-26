#include "main.h"

/**
 * print_triangle - function to print a triangle aligned
 * right, using '#' symbol
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int c, a, b;

	c = 0;
	a = size - 1;
	
	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{	
		while (c < size)
		{
			a = size - 1 - c;
			b = c + 1;

			while (a > 0)
			{
				_putchar(' ');
				a--;
			}	
			while (b > 0)
			{
				_putchar('#');
				b--;
			}
			_putchar('\n');
			c++;
		}
	}
}
