#include "hash_tables.h"
/**
*hash_table_get - retrives a value associated with a key
*@ht: link to hash table
*@key: the key for the value
*Return: the address of the node
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index = 0;
	hash_node_t *node = NULL;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);

		node = node->next;
	}

	return (NULL);
}
