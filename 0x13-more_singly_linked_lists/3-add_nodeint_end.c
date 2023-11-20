#include "lists.h"
/**
 * add_nodeint_end -ad node to end of link
 * @head: head pointer
 * @n: data to be added
 * Return: nothing
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p;
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		p = *head;
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = temp;
	}

	return (temp);

}
