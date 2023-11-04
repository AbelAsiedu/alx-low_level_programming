#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Description: This function allocates memory using malloc.
 * If malloc fails, the program terminates with status value 98.
 *
 * Return: On success, a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
