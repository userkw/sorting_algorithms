#include "sort.h"

/**
 * selection_sort - sorts an ary of int
 *
 * @array: array
 * @size: nber of elements in @array
 */
void selection_sort(int *array, size_t size)
{
	size_t a, b, m_i;
	int tp;

	if (array == NULL || size < 2)
		return;

	for (a = 0; a < size - 1; a++)
	{
		m_i = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[b] < array[m_i])
				m_i = b;
		}

		if (m_i != a)
		{
			/* Swap array[a] and array[m_i] */
			tp = array[a];
			array[a] = array[m_i];
			array[m_i] = tp;

			print_array(array, size);
		}
	}
}
