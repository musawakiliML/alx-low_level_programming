#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char w[8] = "_putchar";
	int counter;

	for (counter = 0; counter < 8; counter++)
	{
		_putchar(w[counter]);
	}
	_putchar('\n');
	return (0);
}
