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
	int num;
	long int fibonacci_num[50];

	fibonacci_num[0] = 1;
	fibonacci_num[1] = 2;

	printf("%lu, %lu, ", fibonacci_num[0], fibonacci_num[1]);

	for (num = 2; num < 50; num++)
	{
		fibonacci_num[num] = fibonacci_num[num - 1] + fibonacci_num[num - 2];
		if (num == 49)
		{
			printf("%lu\n", fibonacci_num[num]);
		}
		else
		{
			printf("%lu, ", fibonacci_num[num]);
		}
	}
	return (0);
}
