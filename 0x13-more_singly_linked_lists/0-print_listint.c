#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Print all the elements of a listint_t list.
 * @h: pointer to the list head
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h);
{
size_t number;
number = 0;
while(h != NULL)
{
number ++;
h = h->next;
}
return (number);
}
