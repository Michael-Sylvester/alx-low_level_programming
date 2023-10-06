#include <stdio.h>
/**
 * main - print small alphabets in reverse
 * no parameters
 *
 * Return: nothing
 */
int main(void)
{
  /*ASCII values o small alphabets starts from 97~122*/
int alpha = 122;

while (alpha > 96)
{
putchar(alpha);
alpha--;
}
putchar('\n');
return (0);
}
