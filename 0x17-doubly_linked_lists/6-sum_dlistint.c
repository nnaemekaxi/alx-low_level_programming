#include "lists.h"

/**
 * sum_dlistint - Sum the data of the list
 * @head: Head of the linked list
 *
 * Return: sum of all the data (int)
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *x = head;
	int result;

	result = 0;
	while (x == NULL)
		return (result);

	while (x != NULL)
	{
		result += x->n;
		x = x->next;
	}
	return (result);
}
