#include <stdio.h>
/**
 * main - a program that prints all arguments it receives
 * @argc : the number of arguments
 * @argv : the pointer to the array of arguments
 *
 * Return: nothing
 */
int main(int argc, char *argv[])
{
int x;
for (x = 0; x < argc; x++)
{
printf("%s\n", argv[x]);
}

putchar('\n');

return (0);
}
