#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of alinked list
 * @head: pointer to the head of the list
 * @n: integer to be used as content
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *a_new_node;

	a_new_node = malloc(sizeof(listint_t));
	if (a_new_node != NULL)
	{
		a_new_node->n = n;
		a_new_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		a_new_node->next = *head;
	*head = a_new_node;
	return (a_new_node);
}
