#include <stdio.h>
/**
 *main - entry point
 *@argc: count of strings on the argv array
 *@argv: array of string
 *Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}

