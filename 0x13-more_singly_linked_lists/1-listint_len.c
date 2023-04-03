#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* listint_len - find number of elements in a linked listint_t list.
* @h: pointer to the head
* Return: The number of elements in a linked listint_t list.
*/

size_t listint_len(const listint_t *h)
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
