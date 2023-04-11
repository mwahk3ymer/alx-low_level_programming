#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid -frees a 2d grid
 * @grid: the 2d grid to free
 * @height: height of grid
 *
 * this fxn frees the em previously allocated
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for  (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
					grid[i] = NULL;
					}
					}

					free(grid);
}
