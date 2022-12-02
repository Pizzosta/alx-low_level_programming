#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of a list.
 * @index: index of the node.
 * Return: nth node. If node does not exist, returns NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth_node;

	for (nth_node = 0; nth_node < index; nth_node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
