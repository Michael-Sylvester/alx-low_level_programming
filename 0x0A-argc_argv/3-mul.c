#include <stdio.h>
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

sum = argv[1] * argv[2];
printf("%d\n", sum)

return (0);
}
