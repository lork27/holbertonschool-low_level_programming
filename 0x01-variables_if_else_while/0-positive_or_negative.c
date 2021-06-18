#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - prints out if the result of n is possitive, negative or 0
*Return: 0 aka correct
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
		else if (n > 0)
		printf("%d is positive\n", n);
		else
			printf("%d is zero\n", n);
	/**
	 *my code here
	 *if n = 0 > ouput 'is zero'
	 *if n > 0 > output 'is positive'
	 *if n < 0 > ouput 'is negative'*
	 */
	return (0);
}

