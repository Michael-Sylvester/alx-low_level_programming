#include <stdio.h>
/**
 * main - blah blah
 * no parameters
 *
 * Return: nothing
 */
int main(void)
{
int i, j;

for (i = 0; i <= 9; i++)
{
for (j = i + 1; j <= 9; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i < 8)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
