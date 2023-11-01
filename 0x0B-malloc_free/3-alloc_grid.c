#include "main.h"
#include <stdlib.h>

/**
 * freedom - a function thatfrees space in a 2d grid
 * a 2 dimensional array of integers.
 * @grid : the pointer to the grid
 * @h : height of 2d grid
 * Return: nothing
 */
void freedom(int **grid, int h)
{
int i;
for (i = 0; i < h; i++)
{
free(grid[i]);
}
free(grid);
}

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
int *col;
int x;
int y;

if (width == 0 || height == 0)
return (NULL);

array = malloc(sizeof(col) * height);

for (x = 0; x < height; x++)
{
array[x] = malloc(sizeof(int) * width);
if (array[x] == NULL)
{
freedom(array, height);
return (NULL);
}
}

for (x = 0; x < height; x++)
{
for (y = 0; y < width ; y++)
{
if (array == NULL)
{
freedom(array, height);
return (NULL);
}
array[x][y] = 0;
}
}
return (array);
}
