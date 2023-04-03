#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *h;
	listint_t *node1;

	h = head;
	node1 = head;
	while (head && h && h->next)
	{
		head = head->next;
		h = h->next->next;

		if (head == h)
		{
			head = node1;
			node1 =  h;
			while (1)
			{
				h = node1;
				while (h->next != head && h->next != node1)
				{
					h = h->next;
				}
				if (h->next == head)
					break;

				head = head->next;
			}
			return (h->next);
		}
	}

	return (NULL);
}
