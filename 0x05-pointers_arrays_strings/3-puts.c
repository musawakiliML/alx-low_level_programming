#include "main.h"

/**
 * _puts - function entry point
 * Description: Function to print to stdout
 * @str: input string array type
 */

void _puts(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
