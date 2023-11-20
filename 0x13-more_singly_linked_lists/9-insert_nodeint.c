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
	listint_t *p;
	listint_t *node;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	p = *head;
	prev = *head;
	node->n = n;

	while (count != idx && p != NULL)
	{

		p = p->next;

		if (count > 0)
			prev = prev->next;

		count++;
	}
	if (p == NULL)
		return (NULL);

	node->next = p;
	prev->next = node;

	return (node);
}
