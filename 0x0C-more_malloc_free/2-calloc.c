#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: Number of elements.
 * @size: Size in bytes of each element.
 *
 * Return: allocated memory pointer, otherwise NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem_ptr;
	unsigned int i;

	/* Check input validity (non-zero nmemb and size) */
	if (nmemb == 0 || size == 0)
		return (NULL);
	/* Memory allocation for the array */
	mem_ptr = malloc(nmemb * size);
	/* Memory allocation failure cheking*/
	if (mem_ptr == NULL)
		return (NULL);
	/* Initialize the allocated memory with zeros */
	for (i = 0; i < nmemb * size; i++)
		mem_ptr[i] = 0;
	return (mem_ptr);
}
