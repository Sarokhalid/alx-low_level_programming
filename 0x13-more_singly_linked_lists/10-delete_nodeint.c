#include "lists.h"
/**
 * delete_nodeint_at_index - hfddz
 * @head: nhgf
 * @index: nbvvc
 * Return: jvcx
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *curr;
	listint_t *p;
	listint_t *t;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
		return (1);
	}
	p = NULL;
	curr = *head;
	while (curr != NULL && c < index)
	{
		p = curr;
		curr = curr->next;
		c++;
	}
	if (curr == NULL)
		return (-1);
	p->next = curr->next;
	free(curr);
	return (1);
}

