#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - here we get a random number and print something according to the result
*Return: 0 it works
*/
int main(void)
{
	int n;
	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = n % 10;
	if (lastn == 0)
		printf("Last digit of is %i is %i and is 0\n", n, lastn);
		else if ((n % 10) > 5)
			printf("Last digit of %i is %i and is greater than 5\n", n, lastn);
		else
			printf("Last digit of %i and is %i less than 6 and not 0\n", n, lastn);
		return (0);
}
