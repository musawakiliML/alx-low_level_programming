#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly alloctaed
 * space in memory which contains a copy of the string
 * passed.
 * @str: pointer to string being duplicated.
 *
 * Return: NULL if str is NULL.
 * pointer to duplicated string on success.
 * NULL if memory was insufficient.
 */
char *_strdup(char *str)
{
	char *valstr;
	unsigned int len, i;

	/* check is str is null */
	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	valstr = malloc(sizeof(char) * (len + 1));

	/*check if malloc was successful*/
	if (valstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		valstr[i] = str[i];
	}
	valstr[len] = '\0';
	return (valstr);

}
