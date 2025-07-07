#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - allocation of a 2 dimensionnal grid
* @width: width of the grid
* @height: height of the grid
* Return: Pointer to the 2D grid, or NULL on failure.
*/
int **alloc_grid(int width, int height)
{
int **grid;
int iw = 0, ih = 0;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
{
return (NULL);
}
for (ih = 0; ih < height; ih++)
{
grid[ih] = malloc(sizeof(int) * width);
if (grid[ih] == NULL)
{
for (iw = 0; iw < ih; iw++)
{
free(grid[iw]);
}
free(grid);
return (NULL);
}
for (iw = 0; iw < width; iw++)
{
grid[ih][iw] = 0;
}
}
return (grid);
}
