#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc.
 * if malloc fails, the malloc_checked function should cause normal
 * process termination with a status value of 98
 * @b: the size of the memory to allocate
 * Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *mem_ptr;

	mem_ptr = malloc(b);
	if (mem_ptr == NULL)
		exit(98);

	return (mem_ptr);
}
