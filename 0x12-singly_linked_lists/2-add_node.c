#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_node - add a new node at the beginning of a list_t list.
*
* @head: adress.
* @str: stirng.
*
* Return: the address of the new element, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
new_node = malloc(sizeof(new_node));
char *new_str;
new_str = strdup(str);
if (str == NULL)
{
return (NULL);
}
else
{
if (new_node == NULL)
{
return (NULL);
}
if (new_str == NULL)
{
free(new_node);
return (NULL);
}
new_node->str = new_str;
new_node->next = *head;
*head = new_node;
return (new_node);
}
}
