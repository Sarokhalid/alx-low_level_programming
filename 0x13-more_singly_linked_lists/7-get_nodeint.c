#include "lists.h"
/**
 * get_nodeint_at_index - gcxxz
 * @head: jgvc
 * @index: hgvcc
 * Return: nbvcxx
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;

	while (head != NULL)
	{
		if (c == index)
		{
			return (head);
		}
		head = head->next;
		c++;
	}
	return (NULL);
}
