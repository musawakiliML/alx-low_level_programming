#include "main.h"

/**
 * prime_a - function entry point
 * @a: number
 * @b: number of power
 * Return: prime number
 */

int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	else
	{
		return (prime_a(a, b + 1));
	}
}


/**
 * is_prime_number - function entry point
 * @n: number
 *
 * Return: prime value
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
