#include "lists.h"
/**
 * free_listint - free the memory of the linked list
 * @head: head pointer
 * @
 * Return: nothing
 */
void free_listint(listint_t *head);
{
	listint_t *next = NULL;
	listint_t *temp;

	if (head != NULL)
	{
		temp = head;

		while (temp != NULL)
		{
			next = temp->next;

			free(temp);

			temp = next;
		}
	}

}
