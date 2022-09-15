#include <ctype.h>
#include "main.h"
/**
 * isdigit - checks lowercase
 * @c: value
 * Description: checks
 * Return: 1 or 0
 */
int _isdigit(int c)
{
if (isdigit(c) > 0)
return (1);
else
return (0);
}
