#include "main.h"

/**
 * string_toupper - a function to changes lowercase
 * to uppercase
 * @str: the string input
 * Return: Uppercase String
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}

	return (str);
}
