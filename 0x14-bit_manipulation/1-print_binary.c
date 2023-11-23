#include "main.h"
/**
 * print_binary - change decimals into binary and print
 * @n: the number to be changed
 * @
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int) * 8 - 1;
	unsigned long int pos = 1UL << size;
	int start = 0;

	printf("size = %d and pos = %lu\n", size, pos);
	while (size >= 0)
	{
		if ((n & pos) != 0)
		{
			_putchar('1');
			start = 1;
		}
		else if (start)
			_putchar('0');
		size--;
		pos >>= 1;
	}

	if (!start)
	{
		printf("size = %d and pos = %lu\n", size, pos);
		_putchar('0');
	}
}
