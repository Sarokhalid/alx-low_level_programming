#include "lists.h"
/**
 * add_nodeint_end - hvcxx
 * @head: hvcx
 * @n: bvvvc
 * Return: hgcxx
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *c;
	listint_t *nn = malloc(sizeof(listint_t));

	if (nn == NULL)
		return (NULL);
	nn->n = n;
	nn->next = NULL;
	if (*head == NULL)
		*head = nn;
	else
	{
		c == *head;

		while (c->next != NULL)
			c = c->next;
		c->next = nn;
	}
	return (nn);
}

