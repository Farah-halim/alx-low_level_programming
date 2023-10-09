#include "search_algos.h"
/**
 * linear_search - implements the linear search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: array's size
 * @value: value to search for in array
 *
 * Return: the corresponding value's index on success,
 *				otherwise (-1)
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
