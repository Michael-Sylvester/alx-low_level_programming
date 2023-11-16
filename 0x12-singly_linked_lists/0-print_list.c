#include "lists.h"
/**
 *print_list - a function that prints all the elements of a list.
 * @h : pointer to first member of list
 * @
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *p = (list_t*)h;

	while (p != NULL)
	{
		printf("[%u] %s", p->len, p->str);
		count++;
		
		p = p->next;	
	}

	return (count);
}
