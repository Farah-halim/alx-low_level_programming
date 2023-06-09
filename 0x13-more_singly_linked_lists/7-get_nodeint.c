#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 *
 * @head: pointer
 * @index: index of the node
 *
 * Return: address of node
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int number;

	number = 0;
	while (number < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		number++;
	}
	return (head);
}
