#include "main.h"
/**
 * set_bit - set the value of the bit at index to 1
 * @n: the number wose bit value will be changed
 * @index: the index where the change should happen
 * Return: 1 if good, -1 if bad
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(unsigned long int) * 8 - 1;
	unsigned int pos = 1U << index;

	if (index > size)
		return (-1);

	if (((*n >> index) & 1) == 0)
		*n ^= pos;

	return (1);
}
