#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 * @h: double pointer to head
 * @idx:index to insert node
 * @n:data to insert
 * Return: adress of node or NULL if fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *temp = *h;
	unsigned int count = 0;
	int size = 0;
	
	size = dlistint_len(*h);
	if( size < idx)
	{
		free(new);
		return (NULL);
	}
	
	if (idx == 0)
		add_dnodeint(h, n);
	else if (idx == size)
		add_dnodeint_end(h, n);
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		count = 1;
		temp = *h->next;
		while (temp != NULL)
			{
				if (count == idx)
				{
					
				}
				temp = temp->next;
				count++;
			}
		
	}
	return (new)
}
