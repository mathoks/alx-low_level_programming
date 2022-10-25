#include "lists.h"
#include "stdio.h"

/**
 * print_listint - print n
 * @h: struct
 * Return: n
 */

size_t print_listint(const listint_t *h)
{
const listint_t *ptr = h;
size_t i = 0;

while (ptr)
{
printf("%d\n", ptr->n);
ptr = ptr->next;
i++;
}
return (i);
}
