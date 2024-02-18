#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of int
 *
 * @list: Pointer
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *crt, *tp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	crt = (*list)->next;
	while (crt != NULL)
	{
		tp = crt->next;
		while (crt->prev != NULL && crt->n < crt->prev->n)
		{
			crt->prev->next = crt->next;
			if (crt->next != NULL)
				crt->next->prev = crt->prev;
			crt->next = crt->prev;
			crt->prev = crt->prev->prev;
			crt->next->prev = crt;

			if (crt->prev == NULL)
				*list = crt;
			else
				crt->prev->next = crt;

			print_list(*list);
		}
		crt = tp;
	}
}
