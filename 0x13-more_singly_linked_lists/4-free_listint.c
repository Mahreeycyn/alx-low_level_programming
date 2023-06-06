#include "lists.h"
/**
 * free_listint - a linked list to be freed
 * @head: a pointer to the head of listint_t to be freed
 */
void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
