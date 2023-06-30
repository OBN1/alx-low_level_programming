#include "lists.h"
/**
 * print_list - printint all elements of a list
 * @h: singly linked list
 * Return: Number of elemenets in the list
 */
size_t print_list(const list_t *h)
{
	size_t noe;/* noe - Number of elements*/

	noe = 0;
	while (h != NULL)
	{
		if (h->str ++ NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		noe++;
	}
	return (noe);
}
