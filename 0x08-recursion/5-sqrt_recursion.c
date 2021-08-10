#include "holberton.h"

int sqrt_check(int n, int i);
/**
 *_sqrt_recursion - check i x i until it matches n
 *@n: the number we are checking
 *Return: the result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	{
	return (sqrt_check(n, 1));
	}
}
/**
 *sqrt_check - check for sqrt number
 *@n: the number we are comparing too
 *@i: the variable we are returning
 *Return: we return i
 *
 */
int sqrt_check(int n, int i)
{
	if (i * i == n)
	{
	return (i);
	}
	if (i * i > n)
	{
	return (-1);
	}
	else
	{
	return (sqrt_check(n, i + 1));
	}
}
