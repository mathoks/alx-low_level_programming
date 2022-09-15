#include "main.h"
/**
 * print_diagonal - hfgrtffd
 * @n: agiuuu
 * Description: hhgh
 * Return: sfdfghhf 0
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
				_putchar(92);
			else if (n <= 0)
				_putchar('\n');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	if (n > 0)
	_putchar('\n');
}
