#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Address of a pointer to the list
 * @str: String to be added
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;
	unsigned int len = 0;

	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);
	new_head->str = strdup(str);
	if (new_head->str == NULL)
	{
		free(new_head);
		return (NULL);
	}
	while (str[len])
		len++;

	new_head->len = len;
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
