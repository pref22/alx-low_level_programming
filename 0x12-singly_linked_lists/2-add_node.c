#include "lists.h"
/**
 * add_node - Adds a new node at the beginning
 * of a list_t list.
 * @head: A pointer to the head of the linked list.
 * @str: The string to be added to the list.
 * Return: The address of the new element, otherwise NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (n = 0; str[n];)
		n++;

	new->len = n;
	new->next = *head;
	*head = new;

	return (*head);
}
