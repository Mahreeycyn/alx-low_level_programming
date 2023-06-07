#include "lists.h"
/**
 * add_nodeint_end - a new node at the end of a linked list is added
 * @head: pointer to the first element in the list
 * @n: data to be inserted in the new element
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *temp;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
else
temp = *head;
}
while (temp->next != NULL)
temp = temp->next;
temp->next = new;
return (*head);
}
