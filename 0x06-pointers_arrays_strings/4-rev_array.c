#include "main.h"

/**
 * reverse_array - a function to reverses an array
 * @a: an array of integers
 * @n: number of elements of an array
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	n = n - 1;

	for (; i < n; i++, n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
