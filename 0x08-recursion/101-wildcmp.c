#include "main.h"
/**
 * wildcmp -  a function that compares two strings and returns 1 if
 * the strings can be considered identical, otherwise return 0.
 * @s1 : pointer to the 1st string
 * @s2 : pointer to the 2nd string
 * Return: 1 or 2;
 */
int wildcmp(char *s1, char *s2)
{

if (*s1 == *s2 || *s2 == '*')
{
if ((*s1 == '\0' && *s2 == '\0') || *s2 == '*')
return (1);

wildcmp(s1 + 1, s2 + 1);
}
else
return (0);
}
