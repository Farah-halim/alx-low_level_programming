#include "lists.h"
#include <stdlib.h>
/**
* free_list - frees a list_t list
* @head: the first element of list
* Return: 0
*/
void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_list(head->next);
		free(head->str);
		free(head);
	}
}
