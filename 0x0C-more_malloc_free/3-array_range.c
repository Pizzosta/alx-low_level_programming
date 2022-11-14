#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */

int *array_range(int min, int max)
{
	int *arr, i = 0, t = min;

	if (min > max)
		return (0);

	arr = (int *)malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (0);
	while (i <= max - min)
		arr[i++] = t++;
	return (arr);
}
