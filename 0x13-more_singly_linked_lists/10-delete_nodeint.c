#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index  of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is deleted.
 *
 * Return: 1 if it succeeded, -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node1;
	listint_t *next;

	node1 = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && node1 != NULL; i++)
		{
			node1 = node1->next;
		}
	}

	if (node1 == NULL || (node1->next == NULL && index != 0))
	{
		return (-1);
	}

	next = node1->next;

	if (index != 0)
	{
		node1->next = next->next;
		free(next);
	}
	else
	{
		free(node1);
		*head = next;
	}

	return (1);
}
