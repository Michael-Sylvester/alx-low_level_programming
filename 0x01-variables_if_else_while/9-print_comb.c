#include <stdio.h>
/**
 * main - blah blah
 * no parameters
 *
 * Return: nothing
 */
int main(void)
{
  /*Print numbers 0~9 with a comma betweeen them*/
  /*ASCII numbers start from 48~57 and letters a to f are 97~102*/
int num = 48;
while (num < 58)
{
putchar(num);
num++;

if (num < 58)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
