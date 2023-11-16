#include "lists.h"
/**
 *free_list- -free all nodes in the list
 * @head : pointer to first member of list
 * @
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *next = NULL;
	list_t *temp;

	if (head != NULL)
	{
		temp = head;

		while (temp != NULL)
		{
			next = temp->next;

			free(temp->str);
			free(temp);

			temp = next;
		}
	}
}
