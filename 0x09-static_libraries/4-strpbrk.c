#include <stddef.h>
#include "main.h"
/**
 * _strpbrk - check string and report the psition of
 * any chatacter from reference string
 * @s : pointer to string to search
 * @accept : pointer to reference array to cross check
 * Return: pointer of found character or NULL
 */
char *_strpbrk(char *s, char *accept)
{
char *first = accept;
while (*s != '\0')
{
while (*accept != '\0')
{
if (*s == *accept)
{
return (s);
}
accept++;
}
s++;
accept = first;
}

return (NULL);

}
