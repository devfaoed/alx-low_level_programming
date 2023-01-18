#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at
 * index index of a dlistint_t linked list.
 * @head: list head
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;

	/* Delete the first node */
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}

	/* Find idx and delete node */
	for (; temp != NULL && count < index - 1; count++)
		temp = temp->next;
	if (!temp || temp->next == NULL)
		return (-1);

	if (temp->next->next != NULL)
	{
		temp->next = temp->next->next;
		free(temp->next->prev);
		temp->next->prev = temp;
		return (1);
	}
	else
	{
		free(temp->next);
		temp->next = NULL;
		return (1);
	}
	return (-1);
}
