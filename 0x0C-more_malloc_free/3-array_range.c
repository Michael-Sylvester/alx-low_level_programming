#include "main.h"
#include <stdlib.h>
/**
* array_range -  a function that creates an array of integers
* @min : 1st member of array
* @max :last member of array
* Return: pointer to array
*/
int *array_range(int min, int max)
{
int *array;
int x = 0;
int count = min;

if (min > max)
return(NULL);

array = malloc(sizeof(int) * (max - min));
if (array == NULL)
return (NULL);

while (count =< max)
{
array[x] = count;
count++;
x++;
}

return (array);
}
