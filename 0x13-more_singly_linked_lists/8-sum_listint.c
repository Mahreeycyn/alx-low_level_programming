#include "lists.h"
/**
 * sum_listint - the sum of all the data in a listint_t list to be calculated
 * @head: first node in the linked list
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
