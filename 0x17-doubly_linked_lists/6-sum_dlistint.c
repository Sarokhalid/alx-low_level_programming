#include <stddef.h>
#include "lists.h"
/**
 * sum_dlistint - hgfd
 * @head: bvcxx
 * Return: jbv
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
	        head = head->next;
	}
	return (sum);
}
