#include "function_pointers.h"
/**
* int_index - a function that searches for an integer.
* @array: array to search in
* @size: size of the array
* @cmp: pointer to function that compares the members
* Return: the member of the array earched for
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int ans = -1;
int i;
if (array != NULL && size > 0 && cmp != NULL)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
}

return (ans);
}
