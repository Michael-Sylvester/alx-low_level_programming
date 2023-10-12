#include "main.h"
/**
 * _isdigit - blah blah
 * @c : parameters
 *
 * Return: nothing
 */
int _isdigit(int c)
{
char alpha = '0';
int ans = 0;

while (alpha <= '9')
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
