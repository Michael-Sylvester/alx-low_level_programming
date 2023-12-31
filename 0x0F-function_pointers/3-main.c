#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
* main - the main function for task 3
* @argc: the number of CMAs
* @argv: pointer to array of arguments
*Return: 1
*/
int main(int argc, char *argv[])
{
  int *ans = malloc(sizeof(int));
int a = atoi(argv[1]);
int b = atoi(argv[3]);
char *operator = argv[2];

if (argc != 4)
{
puts("Error");
exit(98);
}

if ((*operator == '/' || *operator == '%') && b == 0)
{
puts("Error");
exit(100);
}

*ans = get_op_func(operator)(a, b);

if (ans == NULL)
{
puts("Error");
exit(99);
}

printf("%i\n", *ans);
return (1);
}
