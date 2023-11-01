#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid : pointer to 1st member of 2d grid
 * @height : height of the 2d grid
 * Return: pointer to
 */
void free_grid(int **grid, int height)
{
int x;

for (x = 0; x < height; x++)
{
free(grid[x]);
}
free(grid);
}
