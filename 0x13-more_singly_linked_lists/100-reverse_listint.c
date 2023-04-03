#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: node1ointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node1;
	listint_t *node2;

	node1 = NULL;
	node2 = NULL;

	while (*head != NULL)
	{
		node2 = (*head)->next;
		(*head)->next = node1;
		node1 = *head;
		*head = node2;
	}

	*head = node1;
	return (*head);
}
