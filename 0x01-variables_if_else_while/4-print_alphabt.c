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
if (c != 'q' && c != 'e')
{
putchar(c);
}
c++;
}

putchar('\n');
return (0);
}

