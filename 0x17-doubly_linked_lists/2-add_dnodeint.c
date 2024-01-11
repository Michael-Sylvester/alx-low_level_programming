#include "lists.h"
/**
 *add_dnodeint - add node at begining
 * @head: double pointer to head
 * @n: data to be entered
 * Return: new node address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	temp->prev = NULL;

	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;

	return (temp);
}
