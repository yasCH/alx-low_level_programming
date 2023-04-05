#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* pop_listint - a function that deletes the head node of a listint_t.
* @head:pointer
* Return: head node’s data (n) or 0 if the LL is empty
*/
int pop_listint(listint_t **head)
{
int new_n = 0;
listint_t *test;
if (head == NULL || *head == NULL)
{
return (0);
}
test = *head;
new_n = test->n;
*head = test->next;
free(test);
}
