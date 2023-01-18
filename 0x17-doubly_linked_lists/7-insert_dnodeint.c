#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: list head
 * @idx: index
 * @n: new data
 * Return: Address of new node at index idx
 * or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	/* Checks for an empty list with a given index */
	if ((h == NULL && idx != 0) || new == NULL)
		return (NULL);
	new->n = n;
	new->next = new->prev = NULL;
	temp = *h;

	/* add node at start if index = 0 */
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	while (temp)
	{
		/* add node at end if temp->next = NULL */
		if (temp->next == NULL && count == idx - 1)
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		else if ((idx - 1) == count)
		{
			new->next = temp->next;
			new->prev = temp;
			temp->next->prev = new;
			temp->next = new;
			return (new);
		}
		count++;
		temp = temp->next;
	}
	free(new);
	return (NULL);
}
