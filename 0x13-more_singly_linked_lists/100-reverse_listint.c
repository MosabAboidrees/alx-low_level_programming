#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: address of pointer to first node
 * Return: address of head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next; /*tore the next node*/
		(*head)->next = previous; /*Reverse the pointer*/
		previous = *head; /*Move prev one step forward*/
		*head = next; /*Move head one step forward*/
	}
	*head = previous; /*Point head to the last node (previous)*/
	return (*head);
}
