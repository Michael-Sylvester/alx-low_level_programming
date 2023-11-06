#ifndef DOG_H
#define DOG_H

/**
* struct dog - struct ofr a dog
* @name: first member
* @age: 2nd member
* @owner: 3rd member
*/
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);

#endif
