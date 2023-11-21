#include "lists.h"
/**
 * print_listint_safe - prints all the elements in a list
 * @head: pointer to the header
 * @
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int count;
	listint_t *p;

	if (head == NULL)
		exit(98);

	p = (listint_t *)head;
	count = 0;

	while (p != NULL && p->next != head)
	{
		count++;
		printf("%d\n", p->n);
		p = p->next;
	}


	return (count);
}
