#include <stdio.h>
#include <ctype.h>


int _islower(int c);

/**
 * main - blah blah
 * no parameters
 *
 * Return: nothing
 */
int main(void)
{
int r;

putchar(_islower('H'));

putchar(_islower('o'));

putchar(_islower(108));

putchar('\n');

return (0);
}


int _islower(int c)
{
if (islower(c))
return (1);
else
return (0);
}
