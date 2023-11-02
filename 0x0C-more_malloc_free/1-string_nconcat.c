#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
* string_nconcat -  a function that concatenates two strings
* @s1 : 1st string
* @s2 : 2nd string
* @n : No of bytes of s2 to concat
* Return: pointer to new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
int runs2 = 1;  /*1=run s2, 0=dont run s2 */
unsigned int x;
unsigned int num;

if (s2 == NULL || n < 1)
{
str = malloc(sizeof(s1));
runs2 = 0;
}
else if (n >= strlen(s2))
{
str = malloc(strlen(s1) + sizeof(s2));
n = strlen(s2);
}
else
str = malloc(strlen(s1) + 1 + (sizeof(char) * n));

if (str == NULL)
return (NULL);

for (x = 0; s1[x] != '\0'; x++)
{
str[x] = s1[x];
}

if (runs2)
{
for (num = 0; num < n; num++)
{
str[x] = s2[num];
x++;
}
}

str[x] = '\0';

return (str);
}
