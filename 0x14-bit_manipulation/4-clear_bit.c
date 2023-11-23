#include "main.h"
/**
 * clear_bit - set the bit at the index to 0
 * @n: number to be bit manipulated
 * @index: the index at which the clear should happen
 * Return: 1 if good, -1 if bad
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(unsigned long int) * 8 - 1;
	unsigned int pos = 1U << index;

	if (index > size)
		return (-1);

	if (((*n >> index) & 1) == 1)
		*n &= ~pos;

	return (1);
}
