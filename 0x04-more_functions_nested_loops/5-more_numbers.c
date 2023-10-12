#include "main.h"
/**
 * more_numbers - blah blah
 * no parameters
 *
 * Return: nothing
 */
void more_numbers(void)
{
int x = 0;
int y = 0;
while (x < 10)
{
y = 0;
while (y <= 14)
{
if (y > 9)
{
_putchar(y / 10 + '0');
}
_putchar(y % 10 + '0');
y++;
}
_putchar('\n');
x++;
}
}
