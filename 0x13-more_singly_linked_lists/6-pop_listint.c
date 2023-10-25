#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n).
 * @head: address of pointer to first node
 *
 * Return: value of popped node
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int data;

	if (!*head)
		return (0);
	node = *head;
	*head = (*head)->next;
	data = node->n;
	free(node);
	return (data);
}
