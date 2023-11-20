#include "lists.h"
/**
 * listint_len- Coutns number of nodes
 * @h: pointer to 1st node
 * @
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int count;
	listint_t *p;

	if (h == NULL)
		return (0);
	p = malloc(sizeof(listint_t));
	p = (listint_t *)h;

	while (p != NULL)
	{
		count++;
	}


	return (count);
}
