#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 122; letter >= 97; letter--)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
