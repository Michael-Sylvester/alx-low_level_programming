#include "hash_tables.h"
/**
* hash_table_print - prints all members of has table
*@ht: pointer to the hash table
*Retrun : nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	int first = 0;
	unsigned long int index = 0;
	hash_node_t *node = NULL;

	if (ht == NULL)
		return;
	printf("{");
	while (index < ht->size)
	{
		node = ht->array[index];

		while (node != NULL)
		{
			if (first == 0)
			{
				printf("\'%s\': \'%s'", node->key, node->value);
				first = 1;
			}
			else
				printf(", \'%s\': \'%s'", node->key, node->value);
			node = node->next;
		}

		index++;
	}
	printf("}\n");
}
