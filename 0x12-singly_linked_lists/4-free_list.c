#include "lists.h"

/**
* free_list - free list_t
* @head: head of list_t
*
* Return: Always 0
*/

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		free(temp->str);
		free(temp);
		temp = temp->next;
	}
}
