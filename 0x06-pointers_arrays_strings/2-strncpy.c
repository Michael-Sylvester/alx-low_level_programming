#include "main.h"
/**
 * _strncpy -copies one string into another using the pointers for both
 * @dest : parameters
 * @src : source string
 * @n : Number of bytes to copy
 * Return: nothing
 */
char *_strncpy(char *dest, char *src, int n)
{
  char *start = dest;
  int size = 1;
  while (*src != '\0' && size <= n)
    {
      *dest = *src;
      dest++;
      src++;
    }
  
  *dest = '\0';

  return (start);

}
