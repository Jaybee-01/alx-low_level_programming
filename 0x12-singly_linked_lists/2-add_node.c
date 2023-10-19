#include "lists.h"
/**
 * add_node - adds new node at the beginning
 * of the list_t .
 * @head: first node of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t n = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[n])
		n = n + 1;

	new->str = strdup(str);
	new->len = n;
	new->next = *head;
	*head = new;

	return (*head);
}
