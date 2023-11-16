#include "lists.h"
/**
 * add_node- adds new node at begining of list
 * @head : pointer to first member of list
 * @str: atring to be added to the new head node
 * Return: nothing
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
