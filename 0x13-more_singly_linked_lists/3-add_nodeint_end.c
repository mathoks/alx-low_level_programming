#include "lists.h"
/**
 * add_nodeint_end - add at thre end
 * @head: struct pointer;
 * @n: data
 * Return: new_node;
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr = *head;
listint_t *new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = new_node;
return (new_node);
}
