#include "main.h"
/**
 * puts2 - blah blah
 * @str : parameters
 *
 * Return: nothing
 */
void puts2(char *str)
{
int temp = 0;
while (*str != '\0')
{
if (temp % 2 == 0)
_putchar(*str);

str++;
temp++;
}


_putchar('\n');

}
