#include "holberton.h"
/**
 *reverse_array - function that reverse given string
 *@a: the int array
 *@n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int end, begin, buff;

	for (begin = 0, end = n - 1; begin < end; begin++, end--)
	{
		buff = a[begin];
		a[begin] = a[end];
		a[end] = buff;
	}

}

