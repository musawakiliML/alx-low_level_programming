#include "main.h"

/**
 * print_most_numbers - function that prints numbers
 * from 0-9 and a new line
 * Description: use _putchar twice
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		if (c != 2 && c != 4)
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}
