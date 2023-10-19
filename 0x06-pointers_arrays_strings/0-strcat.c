#include "main.h"
/**
 * _strcat - blah blah
 * @dest : parameters
 * @src : yo
 * Return: nothing
 */
char *_strcat(char *dest, char *src)
{
char *start = dest;
while (*dest != '\0')
{
dest++;
}

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return (start);
}


