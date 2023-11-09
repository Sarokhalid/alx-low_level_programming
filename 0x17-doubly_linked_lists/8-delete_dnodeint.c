#include <stdlib h>
#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (*head == NULL)
	{
		   return -1; // List is empty, deletion failed
			        }

	        dlistint_t *current = *head;

		    if (index == 0) {
			            *head = current->next;
				            if (*head != NULL) {
						                (*head)->prev = NULL;
								        }
					            free(current);
						            return 1; // Deletion succeeded
							        }

		        unsigned int count = 0;

			    while (current != NULL && count < index) {
				            current = current->next;
					            count++;
						        }

			        if (current == NULL) {
					        return -1; // Index is out of range, deletion failed
						    }

				    current->prev->next = current->next;

				        if (current->next != NULL) {
						        current->next->prev = current->prev;
							    }

					    free(current);
					        return 1; // Deletion succeeded
}

