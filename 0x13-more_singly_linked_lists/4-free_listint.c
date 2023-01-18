#include "lists.h"

/**
 * free_listint - frees a list_t list
 *
 * @head: list head
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
