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
if (h -> str != NULL)
{
printf("[%lu] %s\n", h-> len, h-> str);
}
printf("[0] (nil)\n");
return (0);
}
