#include <stdio.h>
#include <stdarg.h>
#include "dog.h"
char *check(char *word);
/**
* print_dog - a function that prints struct dog
* @d: pointer to the struct instance
*
* Return: nothing
*/
void print_dog(struct dog *d)
{

printf("Name: %s\n", check(d->name));

printf("Age: %f\n", d->age);

printf("Owner: %s\n", check(d->owner));

}

/**
* check - a function to check if a string variable is NULL
* @word: the string being checked
* Return: the apropriate word
*/
char *check(char *word)
{
if (word != NULL)
return (word);
else
return ("nil");
}
