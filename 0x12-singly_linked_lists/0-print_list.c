#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to the list
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t ListNum;

	for (ListNum = 0; h != NULL; ListNum++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (ListNum);
}
