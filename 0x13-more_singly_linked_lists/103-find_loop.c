#include "lists.h"

/**
 * find_listint_loop - function finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *list_one, *list_two;

	list_one = list_two = head;

	while (list_one && list_two && list_two->next)
	{
		list_one = list_one->next;
		list_two = list_two->next->next;
		if (list_one == list_two)
		{
			list_one = head;
			break;
		}
	}

	if (!list_one || !list_two || !list_two->next)
		return (NULL);
	while (list_one != list_two)
	{
		list_one = list_one->next;
		list_two = list_two->next;
	}
	return (list_two);
}
