#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - a program that generates random valid
  * passwords for the program 101-crackme
  * Return: (0) Always Success
  */

int main(void)
{
	int sum_number;
	char c;

	srand(time(NULL));

	for (sum_number = 0; sum_number <= 2645; sum_number += c)
	{
		c = rand() % 128;
		putchar(c);
	}
	putchar(2772 - sum_number);
	
	return (0);
}
