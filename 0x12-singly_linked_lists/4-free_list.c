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

		while (next != NULL)
		{
			memcpy(next, temp->next, sizeof(list_t));

			free(temp->str);
			free(temp);

			temp = next;
		}
	}
}
