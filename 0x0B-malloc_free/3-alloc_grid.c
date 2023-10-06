#include <stdlib.h>
#include "main.h"


/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int j, k;

	if (height <= 0 || width <= 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		array[j] = (int *) malloc(sizeof(int) * width);
		if (array[j] == NULL)
		{
			free(array);
			for (k = 0; k <= j; k++)
				free(array[k]);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			array[j][k] = 0;
		}
	}
	return (array);
}
