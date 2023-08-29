#include "lists.h"

/**
 * sum_listint - Computes the sum of all the data in a linked list.
 * @head: Pointer to the head of the list.
 * Return: Sum of all the data in the list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

