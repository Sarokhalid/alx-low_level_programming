#include "lists.h"
/**
 * list_len - hffxx
 * @h: bvcc
 * Return: bvvc
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
