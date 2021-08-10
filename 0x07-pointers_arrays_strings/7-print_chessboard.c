#include "holberton.h"
#include <stdio.h>
/**
 *print_chessboard - funct that find a char in a string
 *@a: where we look for c
 */

void print_chessboard(char(*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
