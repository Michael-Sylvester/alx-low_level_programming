#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s : pointer to head of string
 *
 * Return: nothing
 */
int _strlen_recursion(char *s)
{
int size = 0;
if (*s != '\0')
{
size = 1;
size += _strlen_recursion(s + 1);
}

return (size);
}
