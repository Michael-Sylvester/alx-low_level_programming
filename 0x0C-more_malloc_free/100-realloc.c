#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
* _realloc - a function that reallocates a memory block
* @old_size : old size of memory
* @new_size : new memory size
* @ptr : the pointer to the old memory
* Return: pointer to allocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new;
unsigned int x;

if (new_size == old_size)
return (ptr);
else if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
else
{/*copy content of old memory space  */
new = malloc(old_size);
memcpy(new, ptr, old_size);
}


ptr = malloc(new_size);
if (ptr == NULL)
return (NULL);

if (new_size < old_size)
{
memcpy(ptr, new, new_size);
}
else if (new_size > old_size)
{
memcpy(ptr, new, old_size);
}

free(new);
return (ptr);
}
