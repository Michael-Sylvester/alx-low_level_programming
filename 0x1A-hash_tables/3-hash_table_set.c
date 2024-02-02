#include "hash_tables.h"
/**
*hash_table_set- adds an elemnt to the hash table
*@ht: the generated hash table
*@key: the string key for the has table
*@value: the data to be entered into the table
*Return: 1 if succesfull otherwise 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	int status = 0;

	if (key == NULL || value == NULL || ht == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	status = insert(&ht->array[index], value, key);
	return (status);
}

/**
 *insert - inserts a new value at the head of the linked list
 *@head: the head of the array
 *@value: the data to go in the list
 *@key: the name of the hash key
 *Return: 1 if succesfull otherwise 0
 */
int insert(hash_node_t **head, const char *value, const char *key)
{
	hash_node_t *temp = malloc(sizeof(hash_node_t));

	if (temp == NULL)
		return (0);

	temp->key = malloc(strlen(key) + 1);

	temp->value = malloc(strlen(value) + 1);
	if (temp->key == NULL || temp->value == NULL)
	{
		free(temp);
		return (0);
	}

	strcpy(temp->key, (char *)key);
	strcpy(temp->value, (char *)value);

	temp->next = *head;
	*head = temp;

	return (1);
}
