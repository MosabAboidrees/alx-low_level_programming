#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: Pointer to the head of the linked list
 *
 * Return: Sum of the data (n), or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int data_sum = 0;

	for (head != NULL)
	{
		data_sum += head->n;
		head = head->next;
	}
	return (data_sum);
}
