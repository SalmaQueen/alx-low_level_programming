#include "lists.h"

/**
 * listint_len - returns the numbee in nodess
 *
 * @h: head of a list in node
 *
 * Return: numbers of nodess.
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
