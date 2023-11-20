#include "lists.h"
/**
 * print_listint- prints all the elements in a list
 * @h: pointer to the header
 * @
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count;
	listint_t *p;

	if (h == NULL)
		return (0);

	p = malloc(sizeof(listint_t));
	p = (listint_t *)h;
	count = 0;

	while (p != NULL)
	{
		count++;
		printf("%d\n", p->n);
		p = p->next;
	}


	return (count);
}
