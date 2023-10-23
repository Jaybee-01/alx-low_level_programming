#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in the new node created
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newwjay;
	listint_t *temp = *head;

	newwjay = malloc(sizeof(listint_t));

	if (!newwjay)
		return (NULL);

	newwjay->n = n;
	newwjay->next = NULL;

	if (*head == NULL)
	{
		*head = newwjay;
		return (*head);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newwjay;
	return (*head);
}
