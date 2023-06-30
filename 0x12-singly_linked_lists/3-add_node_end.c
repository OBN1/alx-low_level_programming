#include "lists.h"
/**
 * add_node_end - adds a new node of a list
 * @str: string to store in the list
 * @head: The head of the linked list
 * Return: The address of new element, otherwise NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t size = 0;

	new_node = malloc(sizeoof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	while (str[size])
	{
		size++;
	}

	new_node->len = size;
	new_node->next = NULL;

	temp = *head;

	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}
