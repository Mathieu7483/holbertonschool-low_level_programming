#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*free_grid - free a grid
*@grid: pointer of a grid
*@height: height of a grid
*/
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
{
return;
}
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
