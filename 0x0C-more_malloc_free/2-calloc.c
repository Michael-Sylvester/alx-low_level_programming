#include "main.h"
#include <stdlib.h>
/**
* _calloc - a function that allocates memory for an array, using malloc.
* @nmemb : No of elemnts in array
* @size : size of each member of array
* Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ans;

if (nmemb == 0 || size == 0)
return (NULL);

ans = malloc(nmemb * size);

if (ans == NULL)
return (NULL);

return (ans);
}
