#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: A pointer to the head of the dlistint_t list
 * @index: The index of the node, starting at 0
 *
 * Return: The nth node of the list, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index) /*If the index is found, return the node*/
			return (head);
		count++;
		head = head->next; /*Move to the next node*/
	}
	return (NULL); /*If we reach the end without finding the index*/
}
