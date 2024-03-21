#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: A pointer to the head of the dlistint_t list
 *
 * Return:The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n); /*Print the current node's data*/
		nodes++; /*Increment the node count*/
		h = h->next; /*Move to the next node*/
	}

	return (nodes);
}

