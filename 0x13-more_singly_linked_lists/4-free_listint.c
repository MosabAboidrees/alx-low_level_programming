#include "lists.h"

/**
 * free_listint - a function that frees a list_t list.
 * @head: Pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
