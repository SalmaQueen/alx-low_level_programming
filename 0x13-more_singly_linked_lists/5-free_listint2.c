#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_value;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp_value = curr) != NULL)
		{
			curr = curr->next;
			free(temp_value);
		}
		*head = NULL;
	}
}
