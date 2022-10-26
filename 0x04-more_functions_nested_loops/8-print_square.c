#include "main.h"

/**
 * print_square - function entry point
 * Description - function that prints squares
 * @size: input for squares shape
 */
void print_square(int size)
{
	int a, b;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
