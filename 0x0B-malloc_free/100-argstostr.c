#include "main.h"
#include <stdlib.h>
/**
 * argstostr -  a function that concatenates all the arguments
 * @ac : the number of arguments
 * @av : pointer to first argument
 * Return: string with all arguments
 */
char *argstostr(int ac, char **av)
{
char *str;
int x;
int y;
int i = 0;

str = malloc(sizeof(av[x]) * ac);

for (x = 0; x < ac; x++)
{
y = 0;
while (av[x][y] != '\0')
{
str[i] = av[x][y];
y++;
i++;
}
str[i] = '\0';
i++;
}
return (str);
}
