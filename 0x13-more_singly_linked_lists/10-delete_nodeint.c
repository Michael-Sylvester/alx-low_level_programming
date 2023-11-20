#include "lists.h"
/**
 * delete_nodeint_at_index - delete an node at the required idex
 * @head: pointer to the head pointer
 * @index: index for list
 * Return: 0 of success , 1 for faliure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int count = 0;
	listint_t *prev;
	listint_t *p;

	if (head == NULL || *head == NULL)
		return (-1);

	p = *head;
	prev = *head;

	while (count < index && p != NULL)
	{

		p = p->next;

		if (count > 0)
			prev = prev->next;

		count++;
	}
	if (p == NULL)
		return (-1);

	if (index == 0)
		*head = p->next;
	else
		prev->next = p->next;

	free(p);

	return (1);
}
