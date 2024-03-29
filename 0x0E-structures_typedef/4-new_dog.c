#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
* new_dog - Write a function that creates a new dog.
*
* @name: of the dog
* @age: of the dog
* @owner: of the dog
*
* Return: pointer to dog_t or NULL if it fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *t;
t = malloc(sizeof(dog_t));
if (t != NULL)
{
t->name = malloc(strlen(name) + 1);
if (name != NULL)
{
strcpy(t->name, name);
}
else
{
free(t->name);
free(t);
}
t->owner = malloc(strlen(owner) + 1);
if (owner != NULL)
{
strcpy(t->owner, owner);
}
else
{
free(t->owner);
free(t);
}
t->age = age;
return (t);
}
else
{
return (NULL);
}
}
