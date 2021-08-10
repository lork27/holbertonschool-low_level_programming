#include <stdio.h>
#include <stdlib.h>
/**
 *main - the main function
 *@argc: number of arguments
 *@argv: arguments
 *Return: 1 args not 1, 0 if works.
 */

int main(int argc, char *argv[])
{
	int cent[] = {25, 10, 5, 2, 1};
	int wallet, coin = 0, idx = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	wallet = atoi(argv[1]);
	if (wallet < 0)
	{
		printf("0\n");
		return (0);
	}
	while (wallet != 0)
	{
		if (wallet >= cent[idx])
		{
			wallet = wallet - cent[idx];
			coin++;
		}
		else
		{
			idx++;
		}
	}
	printf("%i\n", coin);
	return (0);
}
