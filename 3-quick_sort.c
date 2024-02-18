#include "sort.h"
/**
*swap - the positions of two els
*@array: array
*@item1: array elt
*@item2: array elt
*/
void swap(int *array, ssize_t item1, ssize_t item2)
{
	int tp;

	tp = array[item1];
	array[item1] = array[item2];
	array[item2] = tp;
}
/**
 *lomuto_partition - lomuto
 *@array: ary
 *@first: first ay elt
 *@last: last ary elt
 *@size: size ary
 *Return: return the position
 */
int lomuto_partition(int *array, ssize_t first, ssize_t last, size_t size)
{
	int pvt = array[last];
	ssize_t ct = first, finder;

	for (finder = first; finder < last; finder++)
	{
		if (array[finder] < pvt)
		{
			if (array[ct] != array[finder])
			{
				swap(array, ct, finder);
				print_array(array, size);
			}
			ct++;
		}
	}
	if (array[ct] != array[last])
	{
		swap(array, ct, last);
		print_array(array, size);
	}
	return (ct);
}
/**
 *qs - qucksort
 *@array: array
 *@first: first arry
 *@last: last arry
 *@size: size
 */
void qs(int *array, ssize_t first, ssize_t last, int size)
{
	ssize_t p = 0;


	if (first < last)
	{
		p = lomuto_partition(array, first, last, size);

		qs(array, first, p - 1, size);
		qs(array, p + 1, last, size);
	}
}
/**
 *quick_sort - prepare
 *@array: array
 *@size: array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	qs(array, 0, size - 1, size);
}
