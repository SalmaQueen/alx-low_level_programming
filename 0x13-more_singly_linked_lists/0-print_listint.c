#include "lists.h"

/**
 * print_listint - display all ,the elements of the list.
 * @h: head of list.
 *
 * Return: number of nodes.
 */


size_t print_listint(const listint_t *h)

{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}

	return (node);
}
