#include "main.h"

/**
 * factorial - recursive function
 * @n: number of factorial
 * Return: Always factorial of n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
