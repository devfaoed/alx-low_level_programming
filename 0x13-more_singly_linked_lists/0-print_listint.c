#include "lists.h"

/**
 * print_listint - prints all elements of a listint list
 *
 * @h: list head
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->n)
			printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
