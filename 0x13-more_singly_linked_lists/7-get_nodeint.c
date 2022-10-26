#include "lists.h"

/**
 * get_nodeint_at_index - finds a given node on a linked list
 * @index: index of the node to find
 * @head: head of the list
 * Return: pointer to the desired node, or
 * NUll - if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;

	for (n = 0; (n < index) && (head->next); n++)
		head = head->next;

	if (n < index)
		return (NULL);

	return (head);
}
