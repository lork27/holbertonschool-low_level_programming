#include <stdio.h>
char print_alphabet_x10(void);
/**
 * main - check the code for Holberton School students.
 * Return: Always 0
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10 - prints the alphabet 10 times with just 2 putchar
 * Return: 0
 */

char print_alphabet_x10(void)
{
	int reps;
	char c;

	for (reps = 0; reps <= 9; reps++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
		putchar (c);
		}
	}
	putchar ('\n');
	return (0);

}
