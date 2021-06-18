#include <stdio.h>
/**
*main - function
*Return: 0 correct
*/
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c != 'e' || c != 'q')
			putchar (c);
	}
	putchar ('\n');
	return (0);
}
