#include "main.h"

/**
 * puts_half - Entry point
 * Description - function that prints half of a string, followed by a new line
 * @str: string input
 */

void puts_half(char *str)
{
	int len, a, b;

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	if (len % 2 == 0)
	{
		a = len / 2;
	}
	else
	{
		a = (len + 1) / 2;
	}

	for (b = a; b < len; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
