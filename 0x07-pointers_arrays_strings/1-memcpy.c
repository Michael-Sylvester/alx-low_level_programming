#include "main.h"
/**
 * _memcpy - copy the first n contents of src into dest
 * @dest : destination array
 * @src : the source array
 * @n : the No of bytes to be copied
 * Return: pointer to src
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *first = dest;
unsigned int i = 0;

while (i < n)
{
*dest = *src;
dest++;
src++;
i++;
}

return (first);
}
