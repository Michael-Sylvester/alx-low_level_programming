#include "lists.h"
/**
 * free_dlistint - free a whole list
 * @head: pointer to the head
 * @
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	dlistint_t *next = NULL;

	if (temp != NULL)
		next = temp->next;
	while (next != NULL)
	{
		free(temp);
		temp = next;
		next = temp->next;
	}
	free(temp);
}
