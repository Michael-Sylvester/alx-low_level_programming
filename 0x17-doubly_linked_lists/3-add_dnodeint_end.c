#include "lists.h"
/**
 *add_dnodeint_end - add node to end of list
 * @head: double pointer to head
 * @n: data to be added
 * Return: adress of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	new->prev = temp;
	temp->next = new;

	return (temp);
}
