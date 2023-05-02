#include "lists.h"
/**
 * add_nodeint - function to add new node
 *
 * @head: linked list head
 * @n: number of nodes
 *
 * Return: address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fa;

	if (head == NULL)
		return (NULL);
	fa = malloc(sizeof(listint_t));

	if (fa == NULL)
		return (NULL);
	fa->n = n;
	fa->next = *head;
	*head = fa;
	return (fa);
}
