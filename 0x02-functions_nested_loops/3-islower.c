#include "main.h"
/**
 * _islower - blah blah
 * no parameters
 *
 * Return: nothing
 */
int _islower(int c)
{
bool ans = (c >= 'a' && c <= 'z');

if (ans)
return (1);
else
return (0);
}
