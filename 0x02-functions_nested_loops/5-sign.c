#include "holberton.h"
/**
 * print_sign - funct that prints sign of a number
 * Return: 1, 0 or -1
 * @n: the number we pass the function to compare check its sign
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar(0);
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
