#include "lists.h"
/**
 * free_listint2 - hgfdx
 * @head: jhvcc
 */
void free_listint2(listint_t **head)
{
	listint_t *curr;
	listint_t *t;

	if (head == NULL)
		return;
	curr = *head;
	while (curr != NULL)
	{
		t = curr;
		curr = curr->next;
		free(t);
	}
	*head = NULL;
}
