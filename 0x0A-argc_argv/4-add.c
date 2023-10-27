#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - a program that adds positive numbers
 * @argc : the number of arguments
 * @argv : the pointer to the array of arguments
 *
 * Return: nothing
 */
int main(int argc, char *argv[])
{
int sum;
int i;
int x;
if (argc == 1)
puts("0");
else
{
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) && atoi(argv[i]) >= 0)
{
for (x = 0; x < (int)strlen(argv[i]); x++)
{
if (!isdigit(argv[i][x]))
{
puts("Error");
return (1);
}
}
sum += atoi(argv[i]);
}
else
{
puts("Error");
return (1);
}
}
printf("%d\n", sum);
}

return (0);
}
