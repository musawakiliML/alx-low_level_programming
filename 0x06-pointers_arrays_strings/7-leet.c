#include "main.h"

/**
 * leet - function Entry point
 * Description - a function that encodes a
 * string into 1337
 * @a: string input
 * Return: encoded string value
 */

char *leet(char *a)
{
	int i;
	int j;

	i = 0;

	char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == str[j])
			{
				s[i] = subs[j];
			}
		}
	}

	return (a);
}
