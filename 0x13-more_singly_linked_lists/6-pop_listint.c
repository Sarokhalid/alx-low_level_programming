#include "lists.h"
/**
 * pop_listint - hgff
 * @head: hffdd
 * Return: hgfd
 */
int pop_listint(listint_t **head)
{
	int d;
	listint_t *t;

	if (*head == NULL)
		return (0);
	d = (*head)->n;
	t = *head;
	*head = (*head)->next;
	free(t);
	return (d);
}
