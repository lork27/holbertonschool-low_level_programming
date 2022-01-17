#include "search_algos.h"

/**
 * binary_search - binary linear search algo implementation
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: to search for
 * Return: first index where value is located or -1 if nothing is found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle, i;

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= (right - 1); i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (value);
	}
	return (-1);
}
