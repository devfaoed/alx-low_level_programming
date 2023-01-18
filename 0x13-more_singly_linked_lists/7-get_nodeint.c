#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at
 * a given index
 *
 * @head: node head
 *
 * @index: search index
 *
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len = -1;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		len++;
		if (index == len)
			return (head);
		head = head->next;
	}
	return (NULL);
}
