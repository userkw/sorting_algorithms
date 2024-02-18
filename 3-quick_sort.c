#include "sort.h"

/**
 * selection_sort - sorts an array of int in ascending order using the
 *                  Selection sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t a, d;
	int sp, tp, fg = 0;

	if (array == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		tp = a;
		fg = 0;
		for (d = a + 1; d < size; d++)
		{
			if (array[tp] > array[d])
			{
				tp = d;
				fg += 1;
			}
		}
		sp = array[a];
		array[a] = array[tp];
		array[tp] = sp;
		if (fg != 0)
			print_array(array, size);
	}
}
