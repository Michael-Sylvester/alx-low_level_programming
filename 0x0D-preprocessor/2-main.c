#include "main.h"
x
/**
* main - program will print out its file name
* Return : 0
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
