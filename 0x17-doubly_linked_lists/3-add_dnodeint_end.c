#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: list head
 * @n: new data
 * Return: address of new pointer, otherwise NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	last = *head;
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;
	return (new);
}
