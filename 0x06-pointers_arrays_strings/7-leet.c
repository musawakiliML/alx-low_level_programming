#include "main.h"

/**
 * leet - function to encode a string into 1337
 * @str: character
 * Return: encoded string value
 */

char *leet(char *a)
{

	int c = 0;
	int i = 0;

	char *letters = "aeotlAEOTL";
	char *nums = "4307143071";

	while (a[c] != '\0')
	{
		i = 0;

		while (letters[i] != '\0')
		{
			if (a[c] == letters[i])
				a[c] = nums[i];
			i++;
		}
		c++;
	}

	return (a);
}
