#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* free_dog - Write a function that frees dogs.
*
* @d: pointer to my dog
*
* Return: void
*/
void free_dog(dog_t *d)
{
d = malloc(sizeof(*d));
free(d);
}
