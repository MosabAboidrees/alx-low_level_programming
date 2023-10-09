#include "main.h"
/**
 * alloc_memory - Allocates memory using malloc.
 * @size: a memory to allocate in bytes.
 *
 * Return: allocated memory pointer, otherwise NULL on failure.
 */
void *alloc_memory(unsigned int size)
{
	void *mem_ptr;

	mem_ptr = malloc(size);
	return (mem_ptr);
}
/**
 * copy_memory - a function that copies memory contents from src to dest.
 * @dest: Destination.
 * @src: Source.
 * @size: The number of bytes to copy.
 */
void copy_memory(void *dest, void *src, unsigned int size)
{
	unsigned int idx;
	char *ptr_dest = dest;
	char *ptr_src = src;

	for (idx = 0; idx < size; idx++)
	{
		ptr_dest[idx] = ptr_src[idx];
	}
}
/**
 * re_all_memory - Reallocates a memory block.
 * @ptr: previously allocated memory block pointer.
 * @old_size: memory block old size in bytes.
 * @new_size: memory block new size in bytes.
 * Return: reallocated memory block pointer,otherwise NULL on failure.
 */
void *re_all_memory(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int minimum_size;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);   /* free the memory and returns NULL*/
		return (NULL);
	}
	if (ptr == NULL) /*allocate new memory with malloc */
	{
		return (alloc_memory(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr); /*return the previouse pointer.*/
	}
	/* Allocate new memory */
	new_ptr = alloc_memory(new_size);
	/*Copy contents from the old to new block*/
	if (new_ptr != NULL)
	{
		minimum_size = (new_size < old_size) ? new_size : old_size;
		copy_memory(new_ptr, ptr, minimum_size);
		free(ptr);
	}
	return (new_ptr);
}
/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: Pointer to the previously allocated memory block.
 * @old_size: Size of the old memory block in bytes.
 * @new_size: New size of the memory block in bytes.
 * Return: reallocated memory block pointer,otherwise NULL on failure.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	return (re_all_memory(ptr, old_size, new_size));
}
