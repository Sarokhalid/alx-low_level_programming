#include "lists.h"
/**
 * free_list - vgfdx
 * @head: jbvv
 */
void free_list(list_t *head)
{
	list_t *c = head;
	list_t *ne;

	while (c != NULL)
	{
		ne = c->ne;
		free(c->str);
		free(c);
		c = ne;
	}
}
