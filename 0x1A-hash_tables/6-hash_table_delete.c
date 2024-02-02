#include "hash_tables.h"
/**
 * hash_table_delete - deletes all members of has table
 *@ht: pointer to the hash table
 *Retrun : nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL;
	hash_node_t *next = NULL;

	if (ht == NULL)
		return;

	while (index < ht->size)
	{
		node = ht->array[index];

		while (node != NULL)
		{
			free(node->value);
			free(node->key);
			next = node->next;
			free(node);
			node = next;
		}

		index++;
	}
	free(ht->array);
	free(ht);

}
