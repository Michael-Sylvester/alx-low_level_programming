#include "lists.h"
/**
 * pop_listint - delete head node and return it's data
 * @head: pointer to head pointer
 * @
 * Return: data in head
 */
int pop_listint(listint_t **head)
{

	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	
	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);
	
	return (data);
}
