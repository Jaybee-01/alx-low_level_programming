#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: pointer to the first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;
	listint_t *tempp = head;

	while (tempp && i < index)
	{
		tempp = tempp->next;
		i = i + 1;
	}
	return (tempp ? tempp : NULL);
}
