#include <stdio.h>
/**
 * main - Entry piont
 *
 * Descrition - Prints string
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	char char_type;
	int int_type;
	long int long_int_type;
	long long int long_l_int_type;
	float float_type;

	printf("Size of a char: %d byte(s)\n", (int)sizeof(char_type));
	printf("Size of an int: %d byte(s)\n", (int)sizeof(int_type));
	printf("Size of a long int: %d byte(s)\n", (int)sizeof(long_int_type));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof(long_l_int_type));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(float_type));
	
	return (0);
}
