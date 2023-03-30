#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print all the elements of a list_t list.
 * @h: pointer to the list head
 * Return: The number of nodes
 */
 size_t print_list(const list_t *h)
{
size_t number;
number = 0;
while (h != NULL)
{
if (h->str != NULL)
{
printf("[%u] %s\n", h->len, h->str);
}
else
{
printf("[0] (nil)\n");
}
number++;
h = h->next;
}
return (number);
}
