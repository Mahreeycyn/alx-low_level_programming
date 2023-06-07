#include "lists.h"
/**
 * reverse_listint - a linked list is reversed
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev, *behind;
return (NULL);
behind = NULL;
while ((*head)->next != NULL)
{
prev = (*head)->next;
(*head)->next = behind;
behind = *head;
*head = prev;
}
(*head)->next = behind;
return (*head);
}
