#include <stdlib.h>
#include <stdio.h>
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
t= malloc(sizeof(char *name) + sizeof(float age) + sizeof(char *owner));
if (t == NULL)
{
return(NULL);
}
else
{
return(t);
}
}
