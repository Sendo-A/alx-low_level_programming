#include "lists.h"

/**
 * free_listint2 - frees a list of ints
 * @head: pointer to first node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

	if (!head)
		return;

	node = *head;
	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
	*head = NULL;
}
