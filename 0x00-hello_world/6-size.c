#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on successs
 */

int main(void)
{
	printf("Size of char: %lu byte(s)", sizeof(char));
	printf("Size of int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
