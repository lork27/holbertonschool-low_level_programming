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
	if (!**argv)
		return (1);

	printf("%d\n", argc - 1);
	return (0);
}

