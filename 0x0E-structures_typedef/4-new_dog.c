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
* Return: pointer to dig_t or NULL if it fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *t;
t = malloc(sizeof(*name) + sizeof(age) + sizeof(*owner));
if (t == NULL)
{
return (NULL);
}
else
{
if (name != NULL)
{
t->name = strcpy(t, name);
}
if (owner != NULL)
{
t->owner = strcpy(t, owner);
}
if (age > 0)
{
t->age = strcpy(t, age);
}
}
return (t);
}
