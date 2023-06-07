#include "lists.h"

/**
 * find_listint_loop - finds the loop contained in a listint_t linked list
 * @head: a pointer to the head of the listint_t list
 * Return: address of the node where the loop exists
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *snail *snake;
if (head == NULL
head->next == NULL
return (NULL);
snail = head->next;
snake = (head->next->next;
while (snake)
{
if (snail == snake)
{
snail = head;
while (snail != snake)
{
snail = snail->next;
snake = snake->next;
}
return (snail);
}
snail = snail->next;
hare = (hare->next)->next;
}
return (NULL);
}
