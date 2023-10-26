#include "lists.h"

/**
 * _realloc_list - Reallocates memory for an array of pointers to the nodes
 * in a linked list.
 * @old_list: The old list of pointers.
 * @size: The new size of the list (always one more than the old size).
 * @new_node: The new node to add to the list.
 * Return: Pointer to the new list.
 */
const listint_t **_realloc_list(const listint_t **old_list, size_t size,
		const listint_t *new_node)
{
	const listint_t **new_list;
	size_t i;

	/* Allocate memory for the new list */
	new_list = malloc(size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(old_list); /*Free the old list*/
		exit(98); /*exit if allocation fails*/
	}
	/* Copy elements from the old list to the new list */
	for (i = 0; i < size - 1; i++)
		new_list[i] = old_list[i];
	/* Add the new node to the new list */
	new_list[i] = new_node;
	/* Free the old list as it is no longer needed */
	free(old_list);
	return (new_list);
}

/**
 * print_listint_safe -  a function that prints a listint_t linked list safely
 * @head: Pointer to the start of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t index, node_count = 0;
	const listint_t **address_list = NULL;

	/* Traverse the list until the end is reached or a loop is detected */
	while (head != NULL)
	{
		/* Check if the current node has already been visited */
		for (index = 0; index < node_count; index++)
		{
			/* If a loop is detected, print the current node*/
			/*and free memory before returning */
			if (head == address_list[index])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(address_list);
				return (node_count);
			}
		}

		/* Increment the count of nodes and update the list of addresses */
		/*address_list is used to store the addresses of the nodes that have*/
		/*already been visited during the traversal of the linked list*/
		node_count++;
		address_list = _realloc_list(address_list, node_count, head);
		/* Print the current node's address and data */
		printf("[%p] %d\n", (void *)head, head->n);
		/* Move to the next node in the list */
		head = head->next;
	}
	/* Free the list of addresses and return the total number of nodes */
	free(address_list);
	return (node_count);
}
