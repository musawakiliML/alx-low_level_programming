#include "main.h"

/**
 * main - entry point
 * Description - a function to print 1-100
 * with the fizzbuzz test
 */
int main(void)
{
	int n;

	for (n = 0; n < 100; n++)
	{
		if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz")
		}
		else
		{
			printf("%d", n);
		}
	}
	printf("\n");
}
