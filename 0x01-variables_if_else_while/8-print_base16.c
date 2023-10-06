#include <stdio.h>
/**
 * main - blah blah
 * no parameters
 *
 * Return: nothing
 */
int main(void)
{
  /*Print numbers 0~9 then letters a~f.t hose are the numbers of base 16*/
  /*ASCII numbers start from 48~57 and letters a to f are 97~102*/
int base16 = 48;
while (base16 < 58)
{
putchar(base16);
base16++;
}

base16 = 97;
while (base16 < 103)
{
putchar(base16);
base16++;
}
putchar('\n');
return (0);
}
