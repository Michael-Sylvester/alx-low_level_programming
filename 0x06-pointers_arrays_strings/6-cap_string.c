#include "main.h"
/**
 * cap_string - convert entire string to uppercase
 * @str : parameters
 *
 * Return: nothing
 */
char *cap_string(char *str)
{
int x = 0;
int cap = 0;
char *first  = str;
char lower[] = "abcdefghijklmnopqrstuvwxyz";
char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

while (*str != '\0')
{
x = 0;
while (x < 26)
{

if (*str == lower[x] && cap == 1)
{
*str = upper[x];
cap = 0;
break;
}
x++;
}

if (*str == ',' || *str == ';' || *str == '.' || *str == '!' || *str == '?')
cap = 1;

if (*str == '"' || *str == '(' || *str == ')' || *str == '{' || *str == '}')
cap = 1;

str++;
}
return (first);

}
