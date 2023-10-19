#include "main.h"
/**
 * string_toupper - convert lowercase members of a string to upper
 * @str : pointer to string
 *
 * Return: nothing
 */
char *string_toupper(char *str)
{
int x = 0;
char first  = str;
char lower[] = "abcdefghijklmnopqrstuvwxyz";
char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

while (*str != '\0')
{
x = 0;
while(x < 26)
{
if (*str == lower[x])
{
*str = upper[x];
break;
}
x++;
}
str++;
}
return (first);

}
