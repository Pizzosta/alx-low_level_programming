#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is deleted
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node, *copy_node = *head;
	unsigned int node;

	if (copy_node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy_node);

		return (1);
	}
	/* delete node at position */
	for (node = 0; node < (index - 1); node++)
	{
		if (copy_node->next == NULL)
			return (-1);
		copy_node = copy_node->next;
	}
	temp_node = copy_node->next;
	copy_node->next = temp_node->next;
	free(temp_node);

	return (1);
}
