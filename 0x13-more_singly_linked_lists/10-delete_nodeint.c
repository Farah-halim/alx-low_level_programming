#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node
 *
 * @head: linked list head
 * @index: index
 *
 * Return: 1 and -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *f;
	listint_t *ah;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		f = *head;
		*head = f->next;
		free(f);
		return (0);
	}
	ah = NULL;
	f = *head;
	for (i = 0; i < index; i++)
	{
		if (f == NULL)
			return (-1);
		ah = f;
		f = f->next;
	}
	ah->next = f->next;
	free(f);
	return (0);
}
