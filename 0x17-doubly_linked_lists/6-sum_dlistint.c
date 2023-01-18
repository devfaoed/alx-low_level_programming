#include "lists.h"

/**
 * sum_dlistint - sums all data if a dlistint_t list
 * @head: list head
 * Return: Sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
