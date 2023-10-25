#include "lists.h"

/**
 * free_listint2 -  a function that frees a listint_t list.
 * @head: address of pointer to first node.
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
