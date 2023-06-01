#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a function that frees a linked list (list_t)
 * @head: free the list_t list
 * Description: Frees all the nodes of a linked list and the strings they
 *              contain.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
