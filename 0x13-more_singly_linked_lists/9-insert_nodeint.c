#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node
 *
 * @head: linked list head
 * @idx: index of the node
 * @n: number of nodes
 *
 * Return: address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *fa;
	listint_t *ah;
	unsigned int i;

	fa = malloc(sizeof(listint_t));
	if (!fa)
		return (NULL);
	fa->n = n;
	if (idx == 0 || !*head)
	{
		fa->next = *head;
		*head = fa;
	}
	else
	{
		ah = *head;
		for (i = 0; i < idx - 1; i++)
		{
			if (!ah->next)
				return (NULL);
			ah = ah->next;
		}
		fa->next = ah->next;
		ah->next = fa;
	}
	return (fa);
}
