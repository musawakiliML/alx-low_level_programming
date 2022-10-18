#include <stdio.h>
/**
 * main - program that prints all possible different combinations of 2 digits
 * Return: 0
 */
int main(void)
{
	int counter = 0;
	int fd;
	int ld;

	while (counter <= 99)
	{
		fd = (counter / 10 + '0');
		ld = (counter % 10 + '0');

		if (fd < ld)
		{
			putchar(fd);
			putchar(ld);

			if (counter != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		counter++;
	}
putchar('\n');
return (0);
}
