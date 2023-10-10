#include "main.h"
/**
 * _isalpha - blah blah
 * @c : parameters
 *
 * Return: nothing
 */
int _isalpha(int c)
{
int ans = ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
return (ans);
}
