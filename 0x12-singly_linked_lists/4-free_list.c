#include "list.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list
 * @head: head of the linked list.
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while ((currrnt_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
