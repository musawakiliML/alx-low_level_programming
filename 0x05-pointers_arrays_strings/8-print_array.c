#include "main.h"

/**
 * print_array - function entry point
 * Description - function that prints n elements of
 * an array of integers, followed by a new line.
 * @a: array pointer input
 * @n: int input
 */

void print_array(int *a, int n)
{
	int len;

	len = 0;

	for (n--; n >= 0; n--, len++)
	{
		printf("%d", a[len]);

		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
