#include "lists.h"
/**
 * free_listint - frees a listint_t list
 *
 * @head: linked list head
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *fa;

	while (head)
	{
		fa = head->next;
		free(head);
		head = fa;
	}
}
