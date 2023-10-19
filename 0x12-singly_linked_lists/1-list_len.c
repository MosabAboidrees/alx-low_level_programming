#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: singly linked list.
 * Return: The number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t NodesNum;

	for (NodesNum = 0; h != NULL; NodesNum++)
	{
		h = h->next;
	}
	return (NodesNum);
}
