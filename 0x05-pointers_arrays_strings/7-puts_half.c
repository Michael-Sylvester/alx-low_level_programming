#include "main.h"
/**
 * puts_half - blah blah
 * @str : parameters
 *
 * Return: nothing
 */
void puts_half(char *str)
{
char temp = *str;
int count = 0;
int half = 0;
int again = 0;
while (*str != '\0')
{
count++;
str++;
}

while (*str != temp)
{
count--;
str--;
}
if (count % 2 == 0)
half = count / 2;
else
half = (count - 1) / 2;

while (again != count)
{
if (again >= half)
_putchar(*str);

str++;
again++;
}

_putchar('\n');
}
