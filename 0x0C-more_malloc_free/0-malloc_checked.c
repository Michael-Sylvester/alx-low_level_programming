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
void *ans;

if (b < 1)
exit(98);

ans = malloc(b);

if (ans != NULL)
return (ans);
else
exit(98);
}
