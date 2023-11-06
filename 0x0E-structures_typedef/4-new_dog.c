#include "dog.h"
#include <stdlib.h>
/**
* new_dog : function creates a new dog with typdef dog_t
* @name: 1st member
* @age: 2nd member
* @owner: 3rd member
* Return: pointer to new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t * ndog;
ndog = malloc(sizeof(struct dog));
if (ndog == NULL)
return (NULL);

ndog->name = name;
ndog->age = age;
ndog->owner = owner;

return (ndog);
}
