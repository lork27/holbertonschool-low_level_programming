#include <stdio.h>
/**
 *main - FizzBuzz
 *Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
			putchar(' ');
		}
		else
		{
			printf("%i ", i);
		}
		if (i == 100)
			putchar(' ';
	}
	putchar('\n');
	return (0);
}
