#include "lists.h"
/**
 * listint_len - returns the number of elements
 * in a linked list
 *
 * @h: pointer to head node
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t counter;

	counter = 0;
	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
