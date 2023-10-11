#include "main.h"
/**
 * print_to_98 - blah blah
 * @n : parameters
 *  : parameters
 * Return: nothing
 */
void print_to_98(int n)
{
int first = n;
while (first < 99)
{
_putchar(first);

if (first != 98)
{
_putchar(',');
_putchar(' ');
}
first++;
}

_putchar('\n');
}
