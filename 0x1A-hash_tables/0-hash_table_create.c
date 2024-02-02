#include "hash_tables.h"
/**
* hash_table_create - Function to create a new hash table
* @size: the size of the hash table array
* Return: return the new hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index = 0;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}

	if (size > 0)
	{
		table->array = malloc(size * sizeof(hash_node_t));
		if (table->array == NULL || size == 0)
		{
			free(table);
			return (NULL);
		}
	}
	else
		table->array = NULL;

	table->size = size;

	while (index < size)
	{
		table->array[index] = NULL;
		index++;
	}

	return (table);
}
