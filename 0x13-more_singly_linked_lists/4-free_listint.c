#include "lists.h"
/**
 * free_listint - hgcx
 * @head: jgccc
 */
void free_listint(listint_t *head)
{
	listint_t *curr = head;
	listint_t *t;

	while (curr != NULL)
	{
		t = curr;
		curr = curr->next;
		free(t);
	}
}
