#include "main.h"
/**
 * print_rev - blah blah
 * @s : parameters
 *
 * Return: nothing
 */
void print_rev(char *s)
{

char temp = *s;
while (*s != '\0')
{
s++;
}
s--;
while (*s != temp)
{
_putchar(*s);
s--;
}

if (temp != '\0')
_putchar(temp);

_putchar('\n');
}
