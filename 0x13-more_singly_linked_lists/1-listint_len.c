#include "lists.h"
/**
 * listint_len - lenght
 * @h: struct list
 * Return: i;
 */
size_t listint_len(const listint_t *h)
{
const listint_t *ptr = h;
size_t i = 0;
while (ptr)
{
ptr = ptr->next;
i++;
}
return (i);
}
