#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter_lower;
	char letter_upper;

	for (letter_lower = 'a'; letter_lower <= 'z'; letter_lower++)
	{
		putchar(letter_lower);
	}
	for (letter_upper = 'A'; letter_upper <= 'Z'; letter_upper++)
	{
		putchar(letter_upper);
	}
	putchar('\n');

	return (0);
}
