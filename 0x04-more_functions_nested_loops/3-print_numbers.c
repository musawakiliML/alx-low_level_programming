#include "main.h"

/**
 * print_numbers - function that prints numbers(0-9)
 * Description: you can only use _putchar 2 times
 * Return: void
 */
void print_numbers(void)
{
        int counter;

        for (counter = 0; counter < 10; counter++)
        {
                _putchar(counter + '0');
        }
	_putchar('\n');
}
