#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index index
 * of a listint_t linked list.
 * @head: Address of a pointer to the head of the linked list
 * @index: Index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/*Declare pointers for traversal and temporary storage*/
	listint_t *current, *previous_node;
	unsigned int i;

	if (*head == NULL) /*Check if the list is empty*/
		return (-1);
	/*Set current to the head of the list*/
	current = *head;
	/*If the node to be deleted is the head*/
	if (index == 0)
	{
		*head = current->next; /*Update head to the next node*/
		free(current); /*Free the memory of the current node*/
		return (1);
	}
	/*Traverse the list until the node just before the index*/
	for (i = 0; current && i < index - 1; i++)
	{
		current = current->next;
	}
	/*If the index is out of range*/
	if (current == NULL || current->next == NULL)
		return (-1);
	/*Store the node after the one to be deleted*/
	previous_node = current->next->next;
	/*Free the memory of the node to be deleted*/
	free(current->next);
	/*Update the pointers to skip the deleted node*/
	current->next = previous_node;
	return (1);
}

