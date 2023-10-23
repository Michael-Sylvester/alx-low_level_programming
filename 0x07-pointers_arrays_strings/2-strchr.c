#include "main.h"
#include <stddef.h>
/**
 * _strchr - return 1st occurance of the charater c in the string s
 * @s : the string being searched
 * @c : the character being searched for
 * Return: pointer location to c
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);

s++;
}

return (NULL);
}
