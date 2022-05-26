#include "lists.h"

/**
 * sum_listint - main function
 * @head: Pointer to the first node.
 *
 * Description: This function sum of all the data (n) of a
 * listint_t linked list.
 *
 * Return: The sum or 0 if the list don't exist.
 */

int sum_listint(listint_t *head)
{
	int add;

	add = 0;
	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
