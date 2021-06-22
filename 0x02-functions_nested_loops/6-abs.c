#include "holberton.h"
/**
 * _abs - funct that computes the absolute value of an integer
 * Return: 1, 0 or -1
 * @r: the number we pass the function to change into its abolute value
 */
int _abs(int r)
{
	if (r < 0)
	{
		r = (-1) * r;
	}
	return (r);
}
