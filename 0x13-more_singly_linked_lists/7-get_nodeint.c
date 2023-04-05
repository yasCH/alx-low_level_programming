#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t
 *
 * @head: pointer
 * @index: index of the node
 *
 * Return: the nth node of LL or NULL if the node doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
{
listint_t *current;
unsigned int i;
*current = head;
i = 0;
while ( current != NULL && i < index)
{
current = current->next;
i++;
}
return(current);
}
