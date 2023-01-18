#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list
 *
 * @h: address of the node head
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;
	char *s;
	int n;

	while (h)
	{
		n = h->len;
		s = h->str;

		num++;
		if (h->str != NULL)
		{
			printf("[%u] %s\n", n, s);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		h = h->next;
	}
	return (num);
}
