#include "lists.h"

/**
 * listint_len - Returns length of list
 *
 * @h: list head
 *
 * Return: Length of list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
