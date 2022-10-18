#include <stdio.h>
#include "main.h"
/**
 * print_alphabe - function entry point
 * Description - a function that prints the alphabets, in lowercase.
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
