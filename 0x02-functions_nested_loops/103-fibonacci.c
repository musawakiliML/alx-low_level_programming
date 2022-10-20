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
	long int sum;

	sum = 2;

	fibonacci_num[0] = 1;
	fibonacci_num[1] = 2;

	for (num = 2; num < 50; num++)
	{
		fibonacci_num[num] = fibonacci_num[num - 1] + fibonacci_num[num - 2];
		if ((fibonacci_num[num] % 2) == 0 && fibonacci_num[num] < 4000000)
		{
			sum = sum + fibonacci_num[num];
		}
	}
	printf("%lu\n", sum);

	return (0);
}
