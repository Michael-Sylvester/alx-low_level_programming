#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argc : the number of arguments
 * @argv : the pointer to the array of arguments
 *
 * Return: nothing
 */
int main(int argc, char *argv[])
{
int sum;
if (argc != 3)
{
printf("Error\n");
return (1);
}

sum = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", sum);

return (0);
}
