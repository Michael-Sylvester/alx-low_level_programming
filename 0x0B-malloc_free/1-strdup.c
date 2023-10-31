#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * sizeup -calculates the size of a string using a pointer
 * @s : pointer to the string
 *
 * Return: int x ; string size
 */
int sizeup(char *s)
{
int x = 0;

if (*s != '\0')
{
x = 1;
x += sizeup(s + 1);
}

return (x);
}

/**
 * _strdup - a function that returns a pointer to
 * a newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str : pointer to string to be copied
 *
 * Return: pointer tocopied string
 */
char *_strdup(char *str)
{
char *newstr;
int x = 0;
int size;
if (str == NULL)
return (NULL);

size = sizeup(str);
newstr = malloc(sizeof(char) * size + 1);

while (*str != '\0' && newstr != NULL)
{
newstr[x] = *str;
str++;
x++;
}

return (newstr);
}
