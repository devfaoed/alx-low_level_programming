#include "lists.h"

/**
 * dlistint_len - Calculates the length of a linked dlistint_t list
 * @h: list head
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
