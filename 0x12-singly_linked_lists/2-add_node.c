#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - ADDS A NEW NODE AT THE BEGINNING OF A LIST_T LIST.
 * @head: A POINTER TO THE LIST_T LIST.
 * @str: THE STRING TO BE ADDED TO THE LIST_T LIST.
 *
 * Return: IF FUNCTIONS FAILS - NULL.
 *         OTHERWISE - THE ADDRESS OF THE NEW ELEMNTS.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);

	while (str[len])
	{
		len++;
	}

	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
