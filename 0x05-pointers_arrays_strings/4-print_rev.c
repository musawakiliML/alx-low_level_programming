#include "main.h"

/**
 * print_rev - function entry point
 * Description - function that prints a string, in reverse.
 * @s: string input
 * Return: reversed string
 */

int print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	for (len--; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
