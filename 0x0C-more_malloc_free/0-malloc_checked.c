#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory
 * @b : amount of memory to be allocated
 * @
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
if (b < 1)
exit(98);

if (malloc(b) != NULL)
return (malloc(b));
else
exit(98);
}
