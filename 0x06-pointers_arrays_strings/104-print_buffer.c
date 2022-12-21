#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer input
 * @size: size of the buffer
 * Return : void
 */

void print_buffer(char *b, int size)
{
	int a, d, c;

	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		for (a = 0; a < size; a += 10)
		{
			printf("%.8x:",a);
			for (d = a; d < a + 10; d++)
			{
				if (d % 2 == 0)
				{
					printf(" ");
				}
				if (d < size)
				{
					printf("%.2x", *(b + d));
				}
				else
				{
					printf(" ");
				}
			}
			printf(" ");
			for (c = a; c < a + 10; c++)
			{
				if (c >= size)
				{
					break;
				}
				if (*(b + c) < 32 || *(b + c) > 126)
				{
					printf("%c", '.');
				}
				else
				{
					printf("%c", *(b + c));
				}
			}
			printf("\n");
		}
	}
}
