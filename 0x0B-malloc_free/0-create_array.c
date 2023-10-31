#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 * @size : size of the array
 * @c : value of first array member
 * Return: pointer to
 */
char *create_array(unsigned int size, char c)
{
char *arr;
int i = 0;

if (size <= 0)
return (NULL);

arr = malloc(sizeof(c) * (int)size);
if (arr != NULL)

while (i < (int)size && arr != NULL)
{
arr[i] = c;
i++;
}

return (arr);
}
