#include "main.h"
/**
 * *_realloc - unction that reallocates a memory block using malloc and free
 * @ptr: pointer to memory with malloc(old_size)
 * @old_size: size in bytes of the allocated space
 * @new_size: size in bytes of new memory
 * Return: 0 if new size = 0 and ptr its its != 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)p + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (p);
}
