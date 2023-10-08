#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * if malloc fails, the malloc_checked function should cause normal
 * process termination with a status value of 98
 * @b: the size of the memory to allocate
 * Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	return (ptr ? ptr : (exit(98), NULL));
}
