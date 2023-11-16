#include "lists.h"
/**
* add_node_end- adds new node at begining of list
* @head : pointer to first member of list
* @str: atring to be added to the new head node
* Return: nothing
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p;
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		p = *head;
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = temp;
	}

	return (temp);
}
