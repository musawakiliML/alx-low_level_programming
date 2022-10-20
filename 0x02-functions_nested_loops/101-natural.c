#include <stdio.h>
#include "main.h"

/**
 * main - function entry point.
 * Description - function that prints the sum of all
 * the mutiples of 3 or 5 below 1024.
 * Return: always 0 success
 */
int main(void)
{
	int num;
	int sum;

	sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 5) == 0 || (num % 3) == 0)
		{
			sum = sum + num;
		}
	}

	printf("%d\n", sum);

	return (0);
}
