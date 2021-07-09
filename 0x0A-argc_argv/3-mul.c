#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: count of strings on the argv array
 *@argv: array of string
 *Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int x, y, result;

	if (argc < 3)
	{
		printf("error\n");
		return (1);
	}
	else if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		result = x * y;
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("error\n");
		return (1);
	}
}

