#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_list - Write a function that frees a list_t list.
*
* @head: adress.
*
* Return: void
*/
void free_list(list_t *head)
{
list_t *actual;
list_t *free;

while (actual != NULL)
{
actual = actual->next;
free(free->str);
free(free);
}
}
