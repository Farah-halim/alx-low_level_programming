#include "lists.h"
/**
 * pop_listint - deletes the head node
 *
 * @head: linked list head
 *
 * Return: the head
 */
int pop_listint(listint_t **head)
{
	listint_t *fa;
	int i;

	if (head == NULL || *head == NULL)
		return (0);
	fa = *head;
	i = fa->n;
	*head = fa->next;
	free(fa);
	return (i);
}
