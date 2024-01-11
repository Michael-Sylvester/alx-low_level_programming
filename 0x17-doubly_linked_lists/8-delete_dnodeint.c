#include "lists.h"
/**
 * delete_dnodeint_at_index - delet at index
 * @head: double pointer to head
 * @index: the index for deletion
 * Return: 1 for success 0 for faliure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tempnext = NULL;
	dlistint_t *temp = *head;
	dlistint_t *tempprev = *head;
	unsigned int size = 0;

	size = list_len(*head);
	if (size < index || temp == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		tempnext = temp->next;
		free(temp);
		*head = tempnext;
	}
	else if (index == size)
	{
		temp = get_node_at_index(*head, index);
		tempprev = temp->prev;
		free(temp);
		tempprev->next = NULL;
	}
	else
		{
			temp = get_node_at_index(*head, index);
			tempprev = temp->prev;
			tempnext = temp->next;
			free(temp);
			tempprev->next = tempnext;
			tempnext->prev = tempprev;
		}
	return (1);
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
 *list_len - counts number of elemnts in doubly linked list
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
