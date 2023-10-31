
#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width : width of 2d array
 * @height : height of 2d array
 * Return: pointer to 1st member of array
 */
int **alloc_grid(int width, int height)
{
int **array;
int x;
int y;

if (width == 0 || height == 0)
return (NULL);

array = malloc(sizeof(int) * height);

for (x = 0; x < height; x++)
{
array[x] = malloc(sizeof(int) * width);
}

for (x = 0; x < height; x++)
{
for (y = 0; y < width ; y++)
{
if (array == NULL)
return (NULL);

array[x][y] = 0;
}
}
return (array);
}
