#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *
 * @head: pointer to the adr of the first node
 *
 * @str: string to be added to new node
 *
 * Return: address of new element,
 * NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
