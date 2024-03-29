#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the number, or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, half, i;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		half = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (array[half] < value)
			left = half + 1;
		else if (array[half] > value)
			right = half - 1;
		else
			return (half);
	}

	return (-1);
}
