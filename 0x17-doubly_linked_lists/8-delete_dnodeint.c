#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at
 * index of a dlistint_t linked list.
 * @head: Double pointer to the head of the dlistint_t.
 * @index: The index of the node that should be deleted, starting at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head; /*Store the head node in current*/
	unsigned int i = 0;

	if (*head == NULL) /*If the list is empty*/
		return (-1);

	if (index == 0) /*Delete the first node*/
	{
		*head = current->next; /*Change the head to the next node*/
		if (*head != NULL)/*If the new head is not NULL, set its prev to NULL*/
			(*head)->prev = NULL; /*Set the prev of the new head to NULL*/
		free(current); /*Free the old head*/
		return (1); /*Return 1 if it succeeded*/
	}
	/*Traverse the list to find the node to delete*/
	while (current != NULL && i < index)
	{
		current = current->next; /*Move to the next node*/
		i++; /*Increment the index*/
	}
	if (current == NULL) /*If the index is out of range*/
		return (-1); /*Return -1 if it failed*/

	if (current->next != NULL) /*If the node to delete is not the last node*/
		/*Set the prev of the next node to the prev of the current node*/
		current->next->prev = current->prev;

	if (current->prev != NULL) /*If the node to delete is not the first node*/
		/*Set the next of the prev node to the next of the current node*/
		current->prev->next = current->next;

	free(current); /*Free the current node*/
	return (1); /*Return 1 if it succeeded*/
}
