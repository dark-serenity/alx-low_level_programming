#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: Double pointer to the head of the list.
 * Return: The data of the deleted node.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);

	return (data);
}

