#include <stdio.h>
#include "main.h"
/**
 * print_alphabet: a function that prints the alphabets, in lowercase.
 * Return: Always 0.
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
