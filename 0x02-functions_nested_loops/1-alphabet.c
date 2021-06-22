#include <stdio.h>
char print_alphabet(void);
/**
 * main - check the code for Holberton School students.
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints the alphabet with just 2 putchar
 * Return: 0
 */

char print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar (c);
	}
	putchar ('\n');
	return (0);

}
