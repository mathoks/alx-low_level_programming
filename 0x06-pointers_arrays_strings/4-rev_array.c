#include "main.h"
/**
 * reverse_array - reverse
 * @a: array
 * @n: number
 * Return: gghh
 */
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;
	}
}
