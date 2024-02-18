#include "sort.h"

/**
 * bubble_sort - Sorts an ary of int
 *
 * @array: The ary to be sorted
 * @size: Nbr of elts in @ary
 */
void bubble_sort(int *array, size_t size)
{
	size_t a, j;
	int tp;
	int sd;

	if (array == NULL || size < 2)
		return;

	for (a = 0; a < size - 1; a++)
	{
		sd = 0;

		for (j = 0; j < size - a - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tp;

				print_array(array, size);
				sd = 1;
			}
		}

		if (sd == 0)
			break;
	}
}
