#include "main.h"
/**
 * _isupper - blah blah
 * @c : no parameters
 *
 * Return: nothing
 */
int _isupper(int c)
{
char alpha = 'A';
int ans = 0;

while (alpha <= 'Z')
{
if (alpha == c)
{
ans = 1;
break;
}
alpha++;
}
return (ans);
}
