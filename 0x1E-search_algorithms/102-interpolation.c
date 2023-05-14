#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first where value is located or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (array)
	{
		while ((value >= array[low]))
		{
			pos = low + (((double)(high - low) /
						(array[high] - array[low])) * (value - array[low]));

			if (pos > size)
			{
				printf("Value checked array[%lu] is out of range\n", pos);
				break;
			}

			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

			if (array[pos] < value)
				low = pos + 1;
			else if (array[pos] > value)
				high = pos - 1;
			else
				return (pos);
		}
	}

	return (-1);
}
