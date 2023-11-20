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

	if (*head == NULL || head == NULL)
		return;


	while (*head != NULL)
	{
		temp = (*head)->next;

		free(*head);

		*head = temp;
	}

}
