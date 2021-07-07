#include <stdio.h>

/**
 *factorial - return the factorial of a given number
 *@n: the int num we are going to check
 *Return: the result
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));


}
