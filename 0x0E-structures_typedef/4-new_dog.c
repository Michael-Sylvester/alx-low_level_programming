#include "dog.h"
#include <stdlib.h>
#include <string.h>
int check(char *word);
/**
* new_dog - function creates a new dog with typdef dog_t
* @name: 1st member
* @age: 2nd member
* @owner: 3rd member
* Return: pointer to new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ndog;

ndog = malloc(sizeof(dog_t));
if (ndog == NULL)
return (NULL);

ndog->name = strdup(name);
ndog->owner = strdup(owner);
if (ndog->name == NULL || ndog->owner == NULL)
{
free(ndog);
return (NULL);
}
ndog->age = age;

return (ndog);
}
