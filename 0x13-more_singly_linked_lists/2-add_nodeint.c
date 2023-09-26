#include "lists.h"
/**
 *add_nodeint - hgfcxf
 * @head: hgfd
 * @n: hgffd
 * Return: jvvcc
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nn = malloc(sizeof(listint_t));

	if (nn == NULL)
		return (NULL);
	nn->n = n;
	nn->next = *head;
	*head = nn;
	return (nn);
}
