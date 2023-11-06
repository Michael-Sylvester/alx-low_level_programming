#include "dog.h"
dog_t ndog;
/**
 * new_dog : function creates a nw dog with typdef dog_t
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
  *ndog.name = *name;
  ndog.age = age;
  *ndog.owner = *owner;

  return (&ndog);
}
