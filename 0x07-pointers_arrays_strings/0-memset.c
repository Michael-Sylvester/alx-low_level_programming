#include "main.h"
/**
 * _memset - fill n bytes of the array s points to with the value b
 * @s :destination aray pointer
 * @b : value to place in S
 * @n : No of bytes of s that need to be filled with n
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

while (i < n - 1)
{
s[i] = b;
}

return (s);
}
