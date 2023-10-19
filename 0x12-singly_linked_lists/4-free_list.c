#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: head of the linked list.
 * Return: no return.
 */
void free_list(list_t *head)
{
	list_t *icurrrent;

	while ((icurrrent = head) != NULL)
	{
		head = head->next;
		free(icurrrent->str);
		free(icurrrent);
	}
}
