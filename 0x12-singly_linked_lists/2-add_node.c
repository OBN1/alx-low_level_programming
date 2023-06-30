#include "lists.h"

/**
 * add_node - Adding a new node at the beginning
 * @str: string
 * @head: Head of the linked list
 * Return: Address of the head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nn;/* nn = New Node  */
	size_t nchar; /* nchar = new character */

	nn = malloc(sizeof(list_t));
	if (nn == NULL)
		return (NULL);

	n->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	nn->len = nchar;
	nn->next = *head;
	*head = nn;

	return (*head);
}
