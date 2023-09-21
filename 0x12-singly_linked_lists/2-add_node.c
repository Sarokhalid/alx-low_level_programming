#include "lists.h"
/**
 * add_node - hgdd
 * @head: hvvc
 * @str: jvcc
 * Return: hvcc
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nnode;

	if (str == NULL)
		return (NULL);
	nnode = (list_t *)malloc(sizeof(list_t));
	if (nnode == NULL)
		return (NULL);
	nnode->str = strdup(str);
	if (nnode->str == NULL)
	{
		free(nnode);
		return (NULL);
	}
	nnode->len = strlen(str);
	nnode->next = *head;
	*head = nnode;
	return (nnode);
}
