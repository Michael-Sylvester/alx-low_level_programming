#include <stdio.h>
/**
 * printaphla10- blah blah
 * no parameters
 *
 * Return: nothing
 */
int printaphla10(void)
{
for (int x = 0; x < 10; x++)
{
int num = 'a';
while (num <= 'z' )
{
_putchar(num);
num++;
}
_putchar('\n');
}
return (0);
}
