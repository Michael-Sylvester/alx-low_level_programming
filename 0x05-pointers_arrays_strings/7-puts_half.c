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
_putchar(count + '0');
}

while (*str != temp)
{
str--;
}

half = count / 2;



while (again != count && *str != '\0')
{
if (again > half)
_putchar(*str);

str++;
again++;
}

_putchar('\n');
}
