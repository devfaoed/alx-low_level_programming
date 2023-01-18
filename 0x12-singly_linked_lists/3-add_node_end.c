#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: adr of list
 *
 * @str: string data of new node
 *
 * Return: adr of new element,
 * NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int len = 0;

	if (!str)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[len])
		len++;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
