#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth
 * node of a listint_t linked list.
 * @head: pointer to the head of the list
 * @index: the nth node of the list, or NULL if it does not exist
 *
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int n;

	/* Traverse the list until the desired index is reached */
	for (n = 0; (n < index) && (current_node); n++)
	{
		current_node = current_node->next;
	}
	/* Return the node if it exists at the desired index, else return NULL */
	return (n < index ? NULL : current_node);
}
