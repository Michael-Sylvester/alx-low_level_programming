#include "main.h"
#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

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
