#include "main.h"
/**
 * rev_string - blah blah
 * @s : parameters
 *
 * Return: nothing
 */
void rev_string(char *s)
{
char temp = *s;
char rev[1000];
int count = 0;
while (*s != '\0')
{
s++;
}
s--;

count = 0;
while (*s != temp)
{
rev[count] = *s;
s--;
count++;
}
if (temp != '\0')
rev[count] = temp;

count = 0;
while (*s != '\0')
{
*s = rev[count];
s++;
count++;
}


}
