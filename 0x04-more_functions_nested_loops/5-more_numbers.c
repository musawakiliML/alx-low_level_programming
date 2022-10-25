#include "main.h"

/**
 * more_numbers - function that prints 10 times
 * the numbers 0-14 abd a new line
 * Description: use _putchar twice
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			_putchar(b + '0');
		}
		_putchar('\n');
	}
}
