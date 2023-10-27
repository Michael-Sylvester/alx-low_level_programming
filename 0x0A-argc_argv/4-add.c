#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
if (argc == 1)
puts("0");
else
{
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]))
sum += atoi(argv[i]);
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
