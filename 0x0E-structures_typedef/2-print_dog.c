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
if ( d != NULL)
{
if (name != NULL)
{
printf("Name: "%s\n", d->name);
}
else 
{
printf("Name: (nil)\n");
}
printf("Age: "%d\n", d->age);
if ( d != NULL)
{
if (owner != NULL)
{
printf("Owner: "%s\n", d->owner);
}
else 
{
printf("Name: (nil)\n");
}
}
}
