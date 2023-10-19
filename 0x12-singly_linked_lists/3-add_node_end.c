#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Address of a pointer to the list
 * @str: String to be added.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	return (new_node->str == NULL ? (free(new_node), NULL) : 0);
	while (str[len])
		len++;
	new_node->len = len;
	new_node->next = NULL;
	return (*head == NULL ? (*head = new_node) : 0);
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (new_node);
}
