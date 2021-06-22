#include "holberton.h"
/**
 * print_last_digit - funct that computes the absolute value of an integer
 * Return: 1, 0 or -1
 * @num: the number we pass the function to get the last digit
 */
int print_last_digit(int num)
{
	if (num < 0)
	{
		num = (-1) * num;
	}
	num = num % 10;
	_putchar(num + '0');
	return (num);
}
