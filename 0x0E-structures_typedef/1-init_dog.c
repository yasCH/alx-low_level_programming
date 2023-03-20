#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* init_dog - Write a function that initialize a variable
* of type struct dog
*
* @dog: my dog
* @name: of the dog
* @age: of the dog
* @owner: of the dog
*
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d.name = name;
d.age = age;
d.owner = owner;
}
