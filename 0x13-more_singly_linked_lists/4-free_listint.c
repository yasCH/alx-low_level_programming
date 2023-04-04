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
listint_t *test;
while (head != NULL)
{
test = head;
head = head->next;
free(test);
}
}
