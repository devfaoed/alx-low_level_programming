#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at given index of
 * a listint_t list
 *
 * @head: list head
 *
 * @index: lindex for node to be deleted
 *
 * Return: 1 for success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp1;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	temp = *head;
	for (i = 0; i < (index - 1); i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	temp1 = temp->next;
	temp->next = temp1->next;
	free(temp1);

	return (1);
}
