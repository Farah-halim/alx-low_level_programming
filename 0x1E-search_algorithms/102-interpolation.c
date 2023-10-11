#include "search_algos.h"

/**
 * interpolation_search - implements the interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: value's index on success, (-1) otherwise
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t mid = 0, lo = 0, hi = size - 1;

	if (array == NULL)
		return (-1);

	while (lo <= hi)
	{
		mid = lo + (((double)(hi - lo) /
					(array[hi] - array[lo])) * (value - array[lo]));
		if (mid > size)
		{
			printf("Value checked array[%ld] is out of range\n", mid);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			hi = mid - 1;
		else if (array[mid] < value)
			lo = mid + 1;
	}

	return (-1);
}
