#include "lists.h"
/**
 * sum_dlistint - add sum of all data -> n in nodes
 * @head: pointer to head of node
 * @
 * Return: sum of n or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	sum += head->n;
	temp = head->next;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}


	return (sum);
}
