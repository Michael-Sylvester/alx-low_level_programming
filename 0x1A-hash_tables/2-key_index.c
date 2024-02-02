#include "hash_tables.h"
/**
*key_index - calculates the index for the given has table
*@key: the string key assigned to the data
*@size: the size of the hash table array
*Return: index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;
	unsigned long int hash = 0;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
