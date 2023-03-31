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
list_t *current_node;
current_node = head;
while(current_node != NULL)
{
free(current_node->str);
free(current_node);
}
}
