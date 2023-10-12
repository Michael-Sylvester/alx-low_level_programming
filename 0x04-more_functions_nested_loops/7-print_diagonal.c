#include "main.h"
/**
 * print_diagonal - blah blah
 * @n : parameters
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
if (n > 0)
{
int run = 1;
while (run <= n)
{
int slash = 1;
while (slash < run)
{
_putchar(' ');
slash++;
}
_putchar('\\');
_putchar('\n');
run++;
}
}
else
{
_putchar('\n');
}
}
