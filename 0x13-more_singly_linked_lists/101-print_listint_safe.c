#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: Pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow, *fast;

	if (head == NULL)
		exit(98); /*Exit with status 98 if the list is empty*/

	slow = head; /* Initialize slow pointer to the head of the list*/
	fast = head; /* Initialize fast pointer to the head of the list*/

	/*Iterate through the list until the end or loop is detected*/
	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n); /*Print the current node*/
		count++; /*Increment the node count*/

		slow = slow->next; /*Move slow pointer one step forward*/
		fast = fast->next->next; /*Move fast pointer two steps forward*/
		/*Check if the pointers meet, indicating a loop*/
		if (slow == fast)
		{
			/*Print the start of the loop*/
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			break; /*Break the loop to avoid infinite printing*/
		}
	}
	return (count); /*Return the number of nodes in the list*/
}
