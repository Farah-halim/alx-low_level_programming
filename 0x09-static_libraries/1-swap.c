#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer to one of the integers to be swapped
 * @b: pointer to one of the integers to be swapped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
