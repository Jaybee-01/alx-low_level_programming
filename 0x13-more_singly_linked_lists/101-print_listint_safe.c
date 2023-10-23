#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp_n = NULL;
	const listint_t *l_n = NULL;
	size_t counter = 0;
	size_t neww_n;

	temp_n = head;
	while (temp_n)
	{
		printf("[%p] %d\n", (void *)temp_n, temp_n->n);
		counter = counter + 1;
		temp_n = temp_n->next;
		l_n = head;
		neww_n = 0;
		while (neww_n < counter)
		{
			if (temp_n == l_n)
			{
				printf("-> [%p] %d\n", (void *)temp_n, temp_n->n);
				return (counter);
			}
			l_n = l_n->next;
			neww_n = neww_n + 1;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
