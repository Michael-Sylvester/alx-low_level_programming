#include "lists.h"
/**
 * reverse_listint - Coutns number of nodes
 * @head: pointer to 1st node
 * @
 * Return: number of nodes
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = *head;
	listint_t *mynext = p->next;

	if (*head == NULL)
		return (NULL);
	if (mynext == NULL)
		return (*head);
	p->next = NULL;
	while (mynext != NULL)
	{
		*head = mynext;
		mynext = (*head)->next;
		(*head)->next = p;
		p = *head;
	}


	return (*head);
}
