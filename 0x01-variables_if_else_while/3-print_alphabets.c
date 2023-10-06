#include <stdio.h>
/**
 * main - blah blah
 * no parameters
 *
 * Return: nothing
 */
int main(void)
{
char c = 'a';
while (c != '{')
{
putchar(c);
c++;
}

c = 'A';
while (c != '[')
{
putchar(c);
c++;
}

putchar('\n');
return (0);
}
