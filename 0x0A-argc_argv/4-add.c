#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - entry point
 *@argc: count of strings on the argv array
 *@argv: array of string
 *Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc <= 1)
		printf("0\n");

	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(atoi(argv[i])))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}
	return (0);
}

