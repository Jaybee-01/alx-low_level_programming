#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int diff;
	listint_t *tempp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			tempp = (*h)->next;
			free(*h);
			*h = tempp;
			length = length + 1;
		}
		else
		{
			free(*h);
			*h = NULL;
			length = length + 1;
			break;
		}
	}

	*h = NULL;

	return (length);
}
