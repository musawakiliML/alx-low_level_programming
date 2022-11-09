#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - a function to find and print the largest
 * prime factor of the number
 * 612852475143,followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int i = 3;
	long int n = 612852475143;

	for (; i < n; i += 2)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}

	printf("%lu\n", n);

	return (0);
}
