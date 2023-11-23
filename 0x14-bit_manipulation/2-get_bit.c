#include "main.h"
/**
 * get_bit - finds the value of a bit at a particular index
 * @n: the number that is being checked
 * @index: the index of the bit we are looking for
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = sizeof(unsigned long int) * 8;

	if (index > size)
		return (-1);
	n >>= index;

	return (n & 1);
}
