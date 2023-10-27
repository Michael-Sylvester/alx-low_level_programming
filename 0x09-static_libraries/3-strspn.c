#include "main.h"
/**
 * _strspn - caculates the length of the first n
 * consecurtive characters in s that can be found in accept
 * @s : pointer the string being searched
 * @accept : pointer to the array ofcharacter to be compared with
 * Return: size of consecurtive characters in s that can be found in accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int size = 0;
int cont;
char *first = accept;
while (*s != '\0')
{
cont = 0;
while (*accept != '\0')
{
if (*s == *accept)
{
size++;
cont = 1;
break;
}
accept++;
}
if (cont == 0)
return (size);

s++;
accept = first;
}

return (size);
}
