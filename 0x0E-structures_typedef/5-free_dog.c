#include "dog.h"
#include <stdlib.h>
/**
* free_dog - free all memoery to dog struct
* @d : pointer to dog;
* @
* Return: nothing
*/
void free_dog(dog_t *d)
{
free(d->name);
free(d->owner);
free(d);

}
