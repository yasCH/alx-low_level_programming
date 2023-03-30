#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list_t list.
 * @h: pointer to the head 
 * Return: The number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
size_t counter;
counter = 0;
while (h != NULL)
{
counter++;
h = h->next;
}
return (counter);
}
