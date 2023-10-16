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
_putchar(temp);
_putchar('\n');
}
