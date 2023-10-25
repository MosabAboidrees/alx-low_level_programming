#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list_t list
 * @head: Address of a pointer to the list
 * @n: new head value.
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
		return (NULL);
	new_head->n = n;
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
