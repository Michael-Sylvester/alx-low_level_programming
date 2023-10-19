#include "main.h"
/**
 * is_separator - check if its a text separator
 * @c : parameters
 *
 * Return: nothing
 */
int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;
for (i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
{
return (1);
}
}
return (0);
}

/**
 * cap_string - convert entire string to uppercase
 * @str : parameters
 *
 * Return: nothing
 */
char *cap_string(char *str)
{
int cap_next = 1;

while (*str != '\0')
{
if (is_separator(*str))
{
cap_next = 1;
}
else if (cap_next)
{
if (*str >= 'a' && *str <= 'z')
{
*str -= 32;
}
cap_next = 0;
}
str++;
}

return (str);

}
