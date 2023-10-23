#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserting a new node at agiven postion
 * @head: double pointer
 * @idx: index of the node
 * @n: new node value
 *
 * Return: the address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *tempp, *neww;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		tempp = *head;
		for (a = 0; a < idx - 1 && tempp != NULL; a++)
		{
			tempp = tempp->next;
		}
		if (tempp == NULL)
			return (NULL);
	}
	neww = malloc(sizeof(listint_t));
	if (neww == NULL)
		return (NULL);
	neww->n = n;
	if (idx == 0)
	{
		neww->next = *head;
		*head = neww;
		return (neww);
	}
	neww->next = tempp->next;
	tempp->next = neww;
	return (neww);
}
