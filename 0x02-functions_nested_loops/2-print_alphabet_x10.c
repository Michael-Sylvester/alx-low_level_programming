#include "main.h"
/**
 * print_alphabet_x10 - blah blah
 * no parameters
 *
 * Return: nothing
 */
int print_alphabet_x10(void)
{
int x = 0;
while (x < 10)
{
int num = 'a';
while (num <= 'z')
{
_putchar(num);
num++;
}
_putchar('\n');
x++;
}
return (0);
}
