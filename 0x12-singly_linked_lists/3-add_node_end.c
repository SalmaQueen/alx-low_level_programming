#include "lists.h"

/**
* add_node_end - add a new node to the en list_t
* @head: head of linked list
* @str: string to store the list
*
* Return: Address tto the head
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;
	size_t charCount;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	for (charCount = 0; str[charCount]; charCount++)
		;
	newNode->len = charCount;
	newNode->next = NULL;
	temp = *head;
	if (temp == NULL)
		*head = newNode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
	return (*head);

}
