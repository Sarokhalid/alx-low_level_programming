#include "lists.h"
/**
 * free_list - vgfdx
 * @head: jbvv
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (currebt != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
