#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* print_dog - Write a function that prints a struct dog
*
* @d: pointer to my dog
*
* Return: void
*/
void print_dog(struct dog *d)
{
printf("Name: "%s\n", d->name);
printf("Age: "%i\n", d->age);
printf("Owner: "%s\n", d->owner);
}

