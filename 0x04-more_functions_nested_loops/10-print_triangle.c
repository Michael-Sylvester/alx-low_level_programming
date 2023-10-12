#include "main.h"
/**
 * print_triangle - blah blah
 * @size : parameters
 *
 * Return: nothing
 */
void print_triangle(int size)
{
if (size > 0)
{
int run = 1;
int box;
int space;
while (run <= size)
{
space = size - run;
while (space > 0)
{
_putchar(' ');
space--;
}
box = run;
while (box > 0)
{
_putchar('#');
box--;
}
_putchar('\n');
run++;
}
}
else
{
_putchar('\n');
}

}
