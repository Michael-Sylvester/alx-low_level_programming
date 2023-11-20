#include "lists.h"
/**
 * sum_listint - sums all the data of the nodes in the linked list
 * @head: head pointer
 * @
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *p = (listint_t *)head;

	if (head == NULL)
		return (0);

	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}

	return (sum);
}
