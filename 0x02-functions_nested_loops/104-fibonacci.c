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
	unsigned long long int fibonacci_num[98];

	fibonacci_num[0] = 1;
	fibonacci_num[1] = 2;

	printf("%llu, %llu, ", fibonacci_num[0], fibonacci_num[1]);

	for (num = 2; num < 98; num++)
	{
		fibonacci_num[num] = fibonacci_num[num - 1] + fibonacci_num[num - 2];
		if (num == 97)
		{
			printf("%llu\n", fibonacci_num[num]);
		}
		else
		{
			printf("%llu, ", fibonacci_num[num]);
		}
	}
	return (0);
}
