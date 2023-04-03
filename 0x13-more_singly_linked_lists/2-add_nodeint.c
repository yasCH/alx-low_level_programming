#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* add_nodeint - add a new node at the beginning of a listint_t.
*
* @head: adress.
* @n: integer.
*
* Return: the address of the new element.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *first_node;
if (head == NULL)
{
return (NULL);
}
else
{
first_node = malloc(sizeof(first_node));
if (first_node == NULL)
{
free(first_node);
return (NULL);
}
else
{
first_node->n = n;
first_node->next = *head;
*head = first_node;
return (first_node);
}
}
}
