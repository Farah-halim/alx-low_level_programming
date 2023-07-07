#include "hash_tables.h"
/**
 * hash_table_print - function to print the keys and values of the hash table
 * @ht: pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *str;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	for (i = 0; i < ht->size; i++)
	{
		str = ht->array[i];
		while (str != NULL)
		{
			printf("%s'%s': '%s'", sep, str->key, str->value);
			sep = ", ";
			str = str->next;
		}
	}
	printf("}\n");
}
