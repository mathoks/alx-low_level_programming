#include "main.h"
#include "stdlib.h"

/**
 * create_array - ghhfgh
 * @size: dff
 * @c: character
 * return: ptr
 */
char *create_array(unsigned int size, char c)
{
	size_t i = 0;
	char *ptr = (char *) malloc((sizeof(char) * size) + 1);

	if (!ptr)
		return (NULL);
	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}
	return (ptr);
}