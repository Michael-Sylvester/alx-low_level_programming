#include "lists.h"
/**
 *add_nodeint- add node to head of linkedlist
 * @head: head pointer
 * @n: data for new node
 * Return: nothing
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);

}
