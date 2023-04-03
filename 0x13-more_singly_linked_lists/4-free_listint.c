#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint(listint_t *head)
{
	listint_t *temp_value;

	while ((temp_value = head) != NULL)
	{
		head = head->next;
		free(temp_value);
	}
}
