#include "main.h"
#include <stddef.h>

/**
 * _strstr - find the string Needle within
 * the larger string haysack
 * @haystack : pointer to array to be searched
 * @needle : pointer to string that we are searching for
 * Return: position of needle in haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
char *h;
char *n;
while (*haystack != '\0')
{
h = haystack;
n = needle;
while (*n != '\0' && *h == *n)
{
n++;
h++;
}
if (*n == '\0')
return (haystack);

haystack++;
}

return (NULL);
}
