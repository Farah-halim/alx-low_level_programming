#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end
 *
 * @head: linked list head
 * @n: number of elements
 *
 * Return: address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fa;
	listint_t *ah;

	fa = malloc(sizeof(listint_t));
	if (fa == NULL)
		return (NULL);
	fa->n = n;
	fa->next = NULL;

	if (*head == NULL)
	{
		*head = fa;
	}
	else
	{
		ah = *head;
		while (ah->next != NULL)
			ah = ah->next;
		ah->next = fa;
	}
	return (fa);
}
