#include <stdio.h>
/**
 * printaphla10- blah blah
 * no parameters
 *
 * Return: nothing
 */
int printaphla10(void)
{
int x = 0;
for (x < 10)
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
