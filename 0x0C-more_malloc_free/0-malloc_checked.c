#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: size of memory.
 * Return: exits with a status value of 98 if fails. void pointer if succesfull
 */

void *malloc_checked(unsigned int b)
{
        void *mem_ptr;

        mem_ptr = malloc(b);

        if (!mem_ptr)
                exit(98);

        return (mem_ptr);
}
