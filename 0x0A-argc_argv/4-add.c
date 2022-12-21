#include <stdio.h>
#include <stdlib.h>
/**
* isInteger - checks if s is an integer
* @s: string to check
* Return: value 0 or 1
*/

int isInteger(const char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
* main - adds positive numbers
* @argc: int
* @argv: list of arguments
* Return: 0 success or 1 error
*/

int main(int argc, char const *argv[])
{
	int sum = 0;
	while (--argc)
	{
		if (isInteger(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}

	printf("%i\n", sum);

	return (0);
}
