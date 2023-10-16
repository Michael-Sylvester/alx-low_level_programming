#include "main.h"
#include <stdio.h>
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
printf("length : %d\n", count);

while (*str != temp)
{
str--;
}

half = count / 2;

if (count % 2 == 1)
half++;

printf("half : %d\n", half); 


while (again != count && *str != '\0')
{
if (again >= half)
_putchar(*str);

str++;
again++;
}

_putchar('\n');
}
