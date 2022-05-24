#include "lists.h"
/**
 * list_len - this function returns the number 
 * of elements in a linked list
 * @h: Pointer to a list
 * Return: Integer
 **/

size_t list_len(const list_t *h)
{
	const list_t *list;
	unsigned int looper = 0;
	
	list = h;
	while (list)
	{
		looper++;
		list = list->next;
	}
	return (looper);
}
