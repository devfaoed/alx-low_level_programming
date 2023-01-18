#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of listint_t list
 *
 * @head: list head
 *
 * @n: integer to add
 *
 * Return: Adr of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *temp1;

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	temp1 = *head;
	while (temp1->next)
		temp1 = temp1->next;
	temp1->next = temp;

	return (temp);
}
