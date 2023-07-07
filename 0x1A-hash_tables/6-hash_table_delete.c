#include "hash_tables.h"
/**
 * hash_table_delete - function to delete a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int i;

	if (!ht)
		return;


	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node)
		{
			if (node->next == NULL)
			{
				free(node->value);
				free(node->key);
				free(node);
				continue;
			}
			while (node)
			{
				tmp = node;
				node = node->next;
				free(tmp->value);
				free(tmp->key);
				free(tmp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
