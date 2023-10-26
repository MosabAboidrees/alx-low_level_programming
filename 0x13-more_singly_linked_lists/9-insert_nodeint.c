#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position
 * @head: address of pointerto the head of the linked list
 * @idx: Index at which the new node should be added
 * @n: Value for the data of the new node
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *node;
	unsigned int current_position = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->n = n;
	/*If idx is 0, it means the new node should be inserted*/
	/*at the beginning of the list.*/
	if (idx == 0)
	{
		new_node->next = *head; /*new node inserted at the beginning of the list*/
		*head = new_node; /*update head to point to the new_node*/
		return (new_node); /*returns the address of the new node*/
	}
	/*If idx is not 0 the function uses a while loop to*/
	/*traverse the list until the node at index idx - 1 is reached*/
	node = *head;
	while (node)
	{
		/*Once the desired position is reached*/
		if (current_position == idx - 1)
		{
			/* the new node's next field is set to the current node's next*/
			new_node->next = node->next;
			/*current node's next field is updated to point to the new node*/
			node->next = new_node;
			/*returns the address of the new node*/
			return (new_node);
		}
		/*node is updated to point to the next node in the list.*/
		current_position++;
		node = node->next;
	}
	/*If the end of the list is reached before the desired index*/
	free(new_node);
	return (NULL);
}
