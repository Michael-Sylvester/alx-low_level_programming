#include "lists.h"
/**
 * free_listint2 - free nodes and make head NULL
 * @head: pointer to head pointer
 * @
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *next;

	if (*head == NULL || head == NULL)
		return;

	temp = *head;
	while (temp != NULL)
	{
		next = temp->next;

		free(temp);

		temp = next;
	}
	*head = NULL;
}
