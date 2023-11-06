#include "dog.h"
#include <stdlib.h>
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

if (!check(name) || !check(owner))
return (NULL);

ndog = malloc(sizeof(struct dog));
if (ndog == NULL)
return (NULL);

ndog->name = malloc(sizeof(name));
ndog->owner = malloc(sizeof(owner));
if (!check(ndog->name) || !check(ndog->owner))
return (NULL);

ndog->name = name;
ndog->age = age;
ndog->owner = owner;

return (ndog);
}
/** check - check  for null pointer
* @word: pointer to string
* Return: 1 or 0
*/
int check(char *word)
{
if (word == NULL)
return (0);
else
return (1);
}
