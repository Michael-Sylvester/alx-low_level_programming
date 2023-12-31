#include "function_pointers.h"
#include <stdlib.h>
/**
* array_iterator -  a function that executes a function given
* as a parameter on each element of an array.
* @array: array of parameters
* @size: size of array
* @action: pointer tofunction to be used
* Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;

if (size != 0 && array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
}
