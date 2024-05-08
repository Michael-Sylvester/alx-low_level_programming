#include "search_algos.h"

/**
 * linear_search - Use linear search to find value in array
 * @array: Array to search in
 * @size: Size of array
 * @value: value to search for
 *
 * Return: index where value is found
 */
int linear_search(int *array, size_t size, int value)
{
	int index = 0;

	if (array ==  NULL)
		return (-1);
	for (; index < (int)size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}

	return (-1);
}
