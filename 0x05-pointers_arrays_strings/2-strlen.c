#include "main.h"
/**
 * _strlen - blah blah
 * @s : parameters
 *
 * Return: nothing
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
