#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_listint - Write a function that frees listint_t.
*
* @head: adress.
*
* Return: void
*/
void free_listint(listint_t *head)
{
while (head != NULL)
{
head = head->next;
}
free(head);
}
