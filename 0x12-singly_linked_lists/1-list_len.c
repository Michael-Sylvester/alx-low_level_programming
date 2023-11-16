#include "lists.h"
/**
 *list_len - count the number of nodes in list
 * @h : pointer to first member of list
 * @
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned long count = 0;
	list_t *p = (list_t *)h;

	while (p != NULL)
	{
		count++;
		p = p->next;
	}

	return (count);

}
