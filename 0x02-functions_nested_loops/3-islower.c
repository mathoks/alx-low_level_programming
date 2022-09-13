#include <ctype.h>
#include "main.h"
/**
 * _islower - checks lowercase
 * @c: value
 * Description: checks
 * Return: 1 or 0
 */
int _islower(int c)
{
if (islower(c) > 0)
return (1);
else
return (0);
}
