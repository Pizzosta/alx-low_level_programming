#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of integers
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index number  or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t right = 0, jump, left = 0;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);

	while (left < size && array[left] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		left += jump;
	}

	right = left - jump;
	printf("Value found between indexes [%lu] and [%lu]\n", right, left);

	left = left >= size ? size - 1 : left;

	while  (right <= left)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		if (array[right] == value)
			return ((int)right);
		right++;
	}

	return (-1);
}
