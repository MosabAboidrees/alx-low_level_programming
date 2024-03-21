#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the dlistint_t list
 * @idx: The index of the list where the new node should be added, starts at 0
 * @n: The integer for the new node to contain
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0) /*Insert at the beginning*/
		return (add_dnodeint(h, n)); /*Add node to the beginning*/

	current = *h; /*Store the head node in current*/
	/*Move to the node before the index*/
	for (i = 0; current != NULL && i < idx - 1; i++)
		current = current->next; /*Move to the next node*/

	if (current == NULL && i == idx - 1) /*Insert at the end*/
		return (add_dnodeint_end(h, n)); /*Add node to the end*/
	else if (current != NULL) /*Insert in the middle*/
	{
		/*Allocate memory for the new node*/
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n; /*Put in the data*/
		new_node->prev = current; /*Point to previous node*/
		new_node->next = current->next; /*Point to the next node*/
		if (current->next != NULL) /*If the new node is not at the end*/
			/*Point the next node to the new node*/
			current->next->prev = new_node;
		current->next = new_node; /*Point the current node to the new node*/
		return (new_node);
	}
	return (NULL); /*If idx is out of range*/
}
