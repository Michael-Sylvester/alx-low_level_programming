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

if (s1 == NULL && s2 == NULL)
return (NULL);
else if (s1 == NULL)
concat = malloc(sizeof(s2));
else if (s2 == NULL)
concat = malloc(sizeof(s1));
else
concat = malloc(sizeof(s1) + sizeof(s2));

if (concat == NULL)
return (NULL);

while (*s1 != '\0' && s1 != NULL)
{
concat[x] = *s1;
s1++;
x++;
}

while (*s2 != '\0' && s2 != NULL)
{
concat[x] = *s2;
s2++;
x++;
}
concat[x] = '\0';
return (concat);
}
