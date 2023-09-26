#include "lists.h"
/**
 * print_listint - hgfcxx
 * @h: bbvcc
 * Return: nbvcc
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
