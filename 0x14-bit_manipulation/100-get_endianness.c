#include "main.h"
/**
 *  get_endianness - finds the endianess
 *
 *
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	if (byte[0] == 1)
		return (1);  /*Little Endian*/
	else
		return (0);  /*Big Endian*/
}
