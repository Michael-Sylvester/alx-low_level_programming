#include "hash_tables.h"
/**
 * hash_table_create - Function to create a new hash table
 * @size: the size of the hash table array
 * Return: return the new hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned int index = 0;
    hash_table_t *table = malloc(sizeof(hash_table_t));
    
    
    table->array = malloc(size * sizeof(hash_node_t));
    if (table->array == NULL)
        return (NULL);
   
    table->size = size;

    while (index < size)
    {
        table->array[index] = NULL;
        index++;
    }

    return (table);
}
/*Prototype: hash_table_t *hash_table_create(unsigned long int size);
where size is the size of the array
Returns a pointer to the newly created hash table
If something went wrong, your function should return NULL*/

