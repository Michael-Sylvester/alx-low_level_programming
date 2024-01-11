#include "lists.h"
/**
 *dlistint_len - counts number of elemnts in doubly linked list
 * @h: head of list
 * @
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp = (dlistint_t *)h;
	int count = 0;

	if (h == NULL)
		return (0);

	count++;
	temp = h->next;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}


	return (count);
}
