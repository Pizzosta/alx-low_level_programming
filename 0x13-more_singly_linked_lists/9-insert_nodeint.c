#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of a list.
 * @idx: index of the list where the new node is added.
 * @n: integer element.
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp_node = *head;
	unsigned int node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* set data to new node */
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = temp_node;/* backup new node */
		*head = new_node;

		return (new_node);
	}

	/* insert node at position */
	for (node = 0; node < (idx - 1); node++)
	{
		if (temp_node == NULL || temp_node->next == NULL)
			return (NULL);
		temp_node = temp_node->next;
	}
	new_node->next = temp_node->next;
	temp_node->next = new_node;

	return (new_node);
}
