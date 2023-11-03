#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - a function that multiplies 2 nums
* @argv : list of arguments
* @argc : number of arguments
* Return: pointer to allocated memory
*/
int main(int argc, char *argv[])
{
  int sum;
  if(argc == 3)
    {
      sum = atoi(argv[1]) * atoi(argv[2]);
    }
  printf("%i\n", sum);

  return (0);
}
