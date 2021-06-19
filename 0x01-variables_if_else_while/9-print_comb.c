#include <stdio.h>
/**
 *main - function
 *Return: 0 correct
 */
int main(void)
{

int i = 48;
	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
putchar('\n');
return (0);
}
