#include <stdio.h>

/**
 *main - In this function we print the sizeof, char, int etc
 *Return: 0;
 */
int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(unsigned long));
	printf("Size of float: %ld byte(s)\n", sizeof(float));
	return (0);
}
