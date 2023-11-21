#include "lists.h"
/**
 * get_nodeint_at_index - get the node at the argument index
 * @head: head pointer
 * @index: location that the node is at
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned long count = 0;
	listint_t *p = (listint_t *)head;

	if (head == NULL)
		return (NULL);

	while (count <= index)
	{
		count++;
		p = p->next;
	}

	return (p);

}
