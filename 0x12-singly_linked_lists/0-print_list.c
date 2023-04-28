#include <stdio.h>
#include "lists.h"

/**
 * print_list - PRINTS ALL THE ELEMENTS OF A LISTS_T LIST.
 * @h: IT'S A POINTERS TO THE LIST_T LIST.
 *
 * Return: NUMBERS OF NODES IN H.
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t count = 0;

	while (ptr)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		if (ptr->str != NULL)
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}

		count++;
		ptr = ptr->next;
	}

	return (count);
}
