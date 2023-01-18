#include "lists.h"

/**
 * pop_listint - deletes the head node
 *
 * @head: head node
 *
 * Return: data in head node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	n = temp->n;

	free(temp);

	return (n);
}
