#include "main.h"
/**
 * _puts - blah blah
 *@str : parameters
 *
 * Return: nothing
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
