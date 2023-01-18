#include "lists.h"

/**
 * add_nodeint - adds a new element to node head
 *
 * @head: node head
 *
 * @n: integer to be added to list
 *
 *Return: Adr of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);

}
