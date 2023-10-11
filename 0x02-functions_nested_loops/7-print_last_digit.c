#include "main.h"
/**
 * print_last_digit - blah blah
 * @n : parameters
 *
 * Return: nothing
 */
int print_last_digit(int n)
{
int last = (n % 10);
_putchar(last + '0');
return (last);
}
