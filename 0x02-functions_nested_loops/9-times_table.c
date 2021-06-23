#include "holberton.h"
/**
 * times_table - function that prints minutes of the day
 * Return: void nothing
 *
 */
void times_table(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			if (num2 == 0)
			{
				_putchar(48);
				continue;
			}
			num3 = num1 * num2;
			_putchar(',');
			_putchar(' ');
			if (num3 >= 10)
			{
				_putchar(num3 / 10 + 48);
				_putchar(num3 % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(num3 + 48);
			}
		}
		_putchar('\n');
	}
}
