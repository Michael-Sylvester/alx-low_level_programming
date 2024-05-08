#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (value)
	for (; index < size; index ++)
	{
		if (array[index] == value)
		{
			return ((int)index);
		}
		else 
		{
			printf("Value checked array[%d] = [%d]\n", (int)index, array[index]);
		}
	}
	
	return (-1);
}