#include "function_pointers.h"

/**
 * array_iterator - ghh
 * @array: array
 * @size: dgg
 * @action: dgff
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	int s;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		s = array[i];
		action(s);
	}
}
