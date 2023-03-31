#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_node_end - add a new node at the end of a list_t list.
*
* @head: adress.
* @str: stirng.
*
* Return: the address of the new element, or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *last_node;
char *new_str;
if (head == NULL || str == NULL)
{
return (NULL);
}
else
{
new_node = malloc(sizeof(new_node));
if (new_node == NULL)
{
return (NULL);
}
new_str = strdup(str);
if (new_str == NULL)
{
free(new_node);
return (NULL);
}
new_node->str = new_str;
new_node->len = strlen(str);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
last_node = *head;
while (last_node->next != NULL)
{
last_node = last_node->next;
}
last_node->next = new_node;
}
return (new_node);
}
}
