#include "lists.h"
/**
 * insert_nodeint_at_index - hgddz
 * @head: jgfdx
 * @idx: bvcxx
 * @n: jhggcx
 * Return: jgdsz
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nn;
	unsigned int c = 0;
	listint_t *curr;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		nn = malloc(sizeof(listint_t));
		if (nn == NULL)
		{
			return (NULL);
		}
		nn->n = n;
		nn->next = *head;
		*head = nn;
		return (nn);
	}
	curr = *head;
	while (curr != NULL && c < idx - 1)
	{
		curr = curr->next;
		c++;
		if (curr == NULL)
			return (NULL);
	}
	nn = malloc(sizeof(listint_t));
	if (nn == NULL)
		return (NULL);
	nn->n = n;
	nn->next = curr->next;
	curr->next = nn;
	return (nn);
}
