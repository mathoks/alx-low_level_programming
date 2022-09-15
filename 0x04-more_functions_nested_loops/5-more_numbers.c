#include "main.h"
/**
 * more_numbers - more numbers
 * Description more numbers
 * Return: 0
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar((i <= 9 ? ((i) + '0') : ((i / 10) % 10 + '0')));
			if (i < 9)
				_putchar(i % 10 + '0');
		}
	_putchar('\n');
	}
}
