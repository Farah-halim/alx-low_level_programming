#include "hash_tables.h"
/**
 * add_n_hash - function that adds a node at the beginning of the hash
 * @head: head of the hash linked list
 * @key: key of the hash
 * @value: value to be stored
 * Return: head of the hash
 */
hash_node_t *add_n_hash(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *str;

	str = *head;

	while (str != NULL)
	{
		if (strcmp(key, str->key) == 0)
		{
			free(str->value);
			str->value = strdup(value);
			return (*head);
		}
		str = str->next;
	}

	str = malloc(sizeof(hash_node_t));

	if (str == NULL)
		return (NULL);

	str->key = strdup(key);
	str->value = strdup(value);
	str->next = *head;
	*head = str;

	return (*head);
}

/**
 * hash_table_set - function to add a hash (key, value) to a given hash table
 * @ht: pointer
 * @key: key of the hash
 * @value: value to be stored
 * Return: 1 in successes, 0 in fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k_index;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	k_index = key_index((unsigned char *)key, ht->size);

	if (add_n_hash(&(ht->array[k_index]), key, value) == NULL)
		return (0);

	return (1);
}
