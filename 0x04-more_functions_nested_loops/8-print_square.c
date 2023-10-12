#include "main.h"
/**
 * print_square - blah blah
 * @size : parameters
 *
 * Return: nothing
 */
void print_square(int size)
{
if (size > 0)
{
int l = 0;
while (l < size)
{
int b = 0;
while (b < size)
{
_putchar('#');
b++;
}
l++;
_putchar('\n');
}
}
else
_putchar('\n');
}
