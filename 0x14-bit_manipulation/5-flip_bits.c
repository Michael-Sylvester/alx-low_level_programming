#include "main.h"
/**
 * flip_bits - count the number of bits that need to be
 * flipped in order for the numbers to be equal
 * @n: the 1st number
 * @m: the 2nd number
 * Return: number of flip bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int size = sizeof(unsigned long int) * 8 - 1;
	unsigned int pos = 0U;
	int count = 0;

	while (pos <= size)
	{
		if (get_bit(n, pos) ^ get_bit(m, pos))
			count++;
		pos++;
	}

	return (count);
}

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
