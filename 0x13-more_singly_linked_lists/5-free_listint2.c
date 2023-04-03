#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_listint2 - Write a function that frees listint_t.
*
* @head: adress.
*
* Return: void
*/
void free_listint2(listint_t **head)
{
if (head == NULL)
{
free(head);
}
}
