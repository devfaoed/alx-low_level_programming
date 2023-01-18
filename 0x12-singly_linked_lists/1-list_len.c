#include "lists.h"

/**
 * list_len - Returns the num of elements
 * in a linked list
 *
 * @h: pointer to list
 *
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
