#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    listint_t *head = NULL;
    listint_t *node = NULL;
    int sum;

    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);

    printf("Original list:\n");
    print_listint(head);

    printf("Number of elements: %lu\n", listint_len(head));

    printf("Adding node at the beginning:\n");
    add_nodeint(&head, -1);
    print_listint(head);

    printf("Adding node at the end:\n");
    add_nodeint_end(&head, 2048);
    print_listint(head);

    printf("Popping the first node:\n");
    pop_listint(&head);
    print_listint(head);

    printf("Getting node at index 3:\n");
    node = get_nodeint_at_index(head, 3);
    if (node)
        printf("Node at index 3: %d\n", node->n);

    printf("Sum of list elements: %d\n", sum_listint(head));

    printf("Inserting node at index 2:\n");
    insert_nodeint_at_index(&head, 2, 777);
    print_listint(head);

    printf("Deleting node at index 5:\n");
    delete_nodeint_at_index(&head, 5);
    print_listint(head);

    free_listint2(&head);

    return (0);
}
