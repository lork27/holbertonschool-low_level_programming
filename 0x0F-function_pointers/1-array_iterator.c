#include "function_pointers.h"

/**
 *array_iteractor - executes action function on each element of array
 *@array: the array we parsed and execute
 *@size: size of the array
 *@action: function we pass to be executed on each element of the array
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
