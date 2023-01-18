#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: liat head
 * @index: index to check
 * Return: The nth node of head or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
