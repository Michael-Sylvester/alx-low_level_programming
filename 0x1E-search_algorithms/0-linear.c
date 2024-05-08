#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
	int index = 0;

	if (value)
	for (; index < (int)size; index ++)
	{
		if (array[index] == value)
		{
			return (index);
		}
		else 
		{
			printf("Value checked array[%d] = [%d]\n", index, array[index]);
		}
	}
	
	return (-1);
}