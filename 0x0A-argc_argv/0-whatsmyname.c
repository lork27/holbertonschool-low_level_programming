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
	if (!argc)
		return (1);
	printf("%s\n", argv[0]);
	return (0);
}

