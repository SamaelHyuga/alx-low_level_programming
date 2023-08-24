#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees linked list
 * ssj
 * @head: list_t list e freed
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

