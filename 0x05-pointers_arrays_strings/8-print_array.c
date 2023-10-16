#include "main.h"
#include <stdio.h>
/**
 * print_array - blah blah
 * @a : parameters
 *@n :yo
 * Return: nothing
 */
void print_array(int *a, int n)
{
int count = 0;
while (count < n)
{
printf("%d", *a);

if (count != n - 1)
printf(", ");

count++;
a++;
}
_putchar('\n');
}
