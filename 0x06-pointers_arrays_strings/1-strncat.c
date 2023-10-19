#include "main.h"
/**
 * strncat - blah blah
 * @dest : parameters
 * @src : 2nd string
 * @n : no of members to catinate 
 * Return: nothing
 */
char *_strncat(char *dest, char *src, int n)
{
char *start = dest;
int size = 1;
while (*dest != '\0')
{
dest++;
}

while (*src != '\0' && size <= n)
{
*dest = *src;
dest++;
src++;
size++;
}

*dest = '\0';

return (start);
}
