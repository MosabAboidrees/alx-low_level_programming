#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: A double pointer to the head of the dlistint_t list
 * @n: The integer for the new node to contain
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL; /*As it's the first element, no previous node*/
	new_node->next = *head; /*Next element is the current head*/

	if (*head != NULL)
		/*If list is not empty, set previous of former head*/
		(*head)->prev = new_node;

	*head = new_node; /*Update head to new node*/

	return (new_node);
}
