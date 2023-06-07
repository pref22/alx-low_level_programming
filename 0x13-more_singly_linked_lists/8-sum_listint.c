#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - Calculates the sum of all the data (n) of a linked list
 * @head : Pointer to the head of the list
 * Return: Sum of all the data (n),
 * or 0 - if the list is empty
 */
int sum_listint(listint_t *head)
{
int add;

add = 0;

while (head)
{
add += head->n;
head = head->next;
}
return (add);
}
