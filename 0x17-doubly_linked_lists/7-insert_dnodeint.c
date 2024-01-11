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
	dlistint_t *tempprev = *h;
	unsigned int size = 0;

	size = list_len(*h);
	if( size < idx)
	{
		/*printf("%d < %d", size, idx);*/
		free(new);
		return (NULL);
	}

	if (idx == 0)
		new = add_dnodeint(h, n);
	else if (idx == size)
		new = add_dnodeint_end(h, n);
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		temp = get_node_at_index(*h, idx);

		new->prev = temp->prev;
		tempprev = temp->prev;
		temp->prev = new;
		new->next = temp;
		tempprev->next = new;
	}
	return (new);
}

/**
 * get_node_at_index - find the node at index
 * @head: pointer to the head
 * @index: index of node
 * Return: adress of node or NULL
 */
dlistint_t *get_node_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (temp != NULL)
		{
			if (count == index)
				return (temp);
			temp = temp->next;
			count++;
		}
	return (NULL);
}

/**
 *dlistint_len - counts number of elemnts in doubly linked list
 * @h: head of list
 * @
 * Return: number of elements in list
 */
size_t list_len(const dlistint_t *h)
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
