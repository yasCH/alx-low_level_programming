#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int compute(listint_t *head, int index);

/**
* sum_listint - sum of all the data (n) of a listint_t linked list.
* @head: pointer
* Return: int
*/
int sum_listint(listint_t *head)
{
return (compute(head, 0));
}

/**
* compute - sum of all the data (n) of a listint_t linked list.
* @head: pointer
* @index: int
* Return: int
*/
int compute(listint_t *head, int index)
{
if (head != NULL)
{
index += head->n;
head = head->next;
index = compute(head, index);
}
return (index);
}
