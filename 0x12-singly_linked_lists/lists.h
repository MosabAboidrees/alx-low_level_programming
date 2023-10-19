#ifndef LISTS_
#define LISTS_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - Defines a singly linked list
 * @str: string - holds a dynamically allocated string
 * @len: Length of the string
 * @next: pointer to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _strlen(char *s);
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void _constructor(void) __attribute__ ((constructor));

#endif
