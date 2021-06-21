#include <stdio.h>
/**
 *main - function
 *Return: 0 correct
 */
int main(void)
{
int i, u;
	for (i = 0 ; i <= 8 ; i++)
	{
		for (u = 1; u <= 9 ; u++)
		{
			if (i < u)
			{
				putchar(i + 48);
				putchar(u + 48);
				if (!(i == 8 && u == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
putchar('\n');
return (0);
}
