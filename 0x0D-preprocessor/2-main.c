#include "main.h"

/**
* main - program will print out its file name
*
* Return: nothing
*/
int main(void)
{
char *name = __FILE__;

while (*name != '\0')
{
_putchar(*name);
name++;
}
_putchar('\n');
return (0);
}
