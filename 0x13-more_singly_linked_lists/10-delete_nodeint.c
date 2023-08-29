#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int count = 0;
listint_t *current, *temp;

if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}

current = *head;
while (current != NULL)
{
if (count == index - 1)
{
temp = current->next;
if (temp == NULL)
return (-1);
current->next = temp->next;
free(temp);
return (1);
}
count++;
current = current->next;
}
return (-1);
}

