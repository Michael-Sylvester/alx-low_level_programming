#include "main.h"
/**
 * _strcpy - blah blah
 * @dest : parameters
 * @src : yoyo
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
char *dest_start = dest;


while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}


*dest = '\0';

return (dest_start);
}
