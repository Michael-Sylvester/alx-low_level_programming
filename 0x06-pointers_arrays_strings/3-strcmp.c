#include "main.h"
/**
 * _strcmp - blah blah
 * @s1 : parameters
 * @s2 : 2nd string
 * Return: nothing
 */
int _strcmp(char *s1, char *s2)
{

while (*s1 != '\0' && *s2 != '\0')
{
if (*s1 != *s2)
return ((*s1 > *s2) ? 15 : -15);

s1++;
s2++;
}

if (*s1 == '\0' && *s2 == '\0')
return (0);
else if (*s1 == '\0')
return (-1);
else
return (1);


}
