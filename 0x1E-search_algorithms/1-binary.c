#include "search_algos.h"

/**
 * binary_search - Use binary search to find value in array
 * @array: Array to search in
 * @size: Size of array
 * @value: value to search for
 *
 * Return: index where value is found
 */
int binary_search(int *array, size_t size, int value)
{
	int middle = -1;
	int end  = (int)size;
	int start = 0;
	int index = 0;
	int count = 0;

	if (array ==  NULL)
		return (-1);
	do {
		/*Print all the numbers to be sorted through this round*/
		printf("Searching in array: ");
		for (index = start; index < end; index++)
		{
			printf("%d", array[index]);
			if (index < end - 1)
				printf(", ");
			else
				printf("\n");
		}

		middle = ((end - 1) + start) / 2;
		if (array[middle] == value)
			return (middle);

		if (value > array[middle])
		start = middle + 1;
		else
			end = middle;
		count++;
	} while (start < end);

	return (-1);
}
