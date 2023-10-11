#include "main.h"
/**
 * print_last_digit - blah blah
 * @n : parameters
 *
 * Return: nothing
 */
int print_last_digit(int n)
{
if (n < 0)
int last = (-n % 10);
else
int last = (n % 10);

_putchar(last + '0');

return (last);
}
