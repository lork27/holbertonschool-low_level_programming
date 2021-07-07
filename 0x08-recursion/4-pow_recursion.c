#include "holberton.h"

/**
 *_pow_recursion - return value of x to the power of y
 *@x: int to be multiplied the power of
 *@y: factor of power
 *Return: x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
