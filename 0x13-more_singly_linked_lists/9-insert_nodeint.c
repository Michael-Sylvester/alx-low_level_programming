#include "lists.h"
/**
 * insert_nodeint_at_index - Insert a new node ata particular index
 * @head: pointer to head pointer
 * @idx: index location to add
 * @n: data add to node
 * Return: nothing
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *prev;
	listint_t *p = *head;
	listint_t *node;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (count != idx && p != NULL)
	{
		prev = p;
		p = p->next;
		count++;
	}
	if (p == NULL && idx == count + 1)
	{
		node->next = NULL;
		prev->next = node;
	}
	else if (p != NULL)
	{
		node->next = p;
		prev->next = node;
	}
	else
	{
		free(node);
		return (NULL);
	}
	return (node);
}
