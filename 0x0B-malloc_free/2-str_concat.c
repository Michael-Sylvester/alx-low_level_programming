#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1 : original string
 * @s2 : string to add
 * Return: pointer to original string
 */
char *str_concat(char *s1, char *s2)
{
int x = 0;
char *concat;

concat = malloc(sizeof(s1) + sizeof(s2));

if (concat == NULL)
return (NULL);

while (*s1 != '\0')
{
concat[x] = *s1;
s1++;
x++;
}

while (*s2 != '\0')
{
concat[x] = *s2;
s2++;
x++;
}
concat[x] = '\0';
return (concat);
}
