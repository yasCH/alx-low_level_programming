#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_nodeint_end - add a new node at the end of a listint_t.
*
* @head: adress.
* @n: integer.
*
* Return: the address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *last_node;
if (head == NULL)
{
return (NULL);
}
else
{
new_node = malloc(sizeof(new_node));
if (new_node == NULL)
{
free(new_node);
return (NULL);
}
else
{
new_node->n = n;
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
}
