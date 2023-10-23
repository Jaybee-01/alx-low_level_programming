#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first node in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempp = *head;
	listint_t *current = NULL;
	size_t a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempp);
		return (1);
	}

	while (a < index - 1)
	{
		if (!tempp || !(tempp->next))
			return (-1);

		tempp = tempp->next;
		a = a + 1;
	}

	current = tempp->next;
	tempp->next = current->next;
	free(current);

	return (1);
}
