#include "lists.h"

/**
 * sum_listint - Sums all the data of a listint_t list
 *
 * @head: list head
 *
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
