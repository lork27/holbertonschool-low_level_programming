#include "function_pointers.h"

/**
 *int_index - search for an int in particular
 *@array: of numbers we are parsing through to look for the int
 *@size: number of elements in the array
 *@cmp: function we are passing to look for a number
 *Return: i when it matches with the return of cmp
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (NULL);

	while (i < size)
	{
		if (cmp(array[i]) == 1)
			return (i);
		i++;
	}
	return (-1);


}
