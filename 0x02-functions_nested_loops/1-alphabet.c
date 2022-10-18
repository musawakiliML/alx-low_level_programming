#include <stdio.h>
#include "main.h"
/**
 * Description: a function that prints 10 times the alphabet, in lowercase.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
