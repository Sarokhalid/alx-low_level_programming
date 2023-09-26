#include "lists.h"
/**
 * add_nodeint_end - hvcxx
 * @head: hvcx
 * @n: bvvvc
 * Return: hgcxx
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr;
	listint_t *nn = malloc(sizeof(listint_t));

	if (nn == NULL)
		return (NULL);
	nn->n = n;
	nn->next = NULL;
	if (*head == NULL)
		*head = nn;
	else
	{
		curr == *head;

		while (curr->next != NULL)
			curr = curr->next;
		curr->next = nn;
	}
	return (nn);
}

