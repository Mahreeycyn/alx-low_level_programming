#include "lists.h"
/**
 * listint_len - the number of elements in a linked list to be returned
 * @h: linked list of type listint_t to be tranversed
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h)
{
num++;
h = h->next;
}
return (num);
}
