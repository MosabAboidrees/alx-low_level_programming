#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: A double pointer to the head of the dlistint_t list
 * @n: The integer for the new node to contain
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL; /*As it's the last element, no next node*/

	if (*head == NULL)
	{
		new_node->prev = NULL; /*It's also the first element*/
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL) /*Traverse to the last node*/
		{
			temp = temp->next;
		}
		temp->next = new_node; /*Link the last node to the new node*/
		new_node->prev = temp;
	}

	return (new_node);
}
