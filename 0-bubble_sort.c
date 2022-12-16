#include "sort.h"

/**
 * swap_ints - Function to Swap two integers in an array.
 * @a: The first Integer.
 * @b: The second integer.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, arr_len = size;
	bool is_bulby = false;

	if (array == NULL || size < 2)
		return;

	while (is_bulby == false)
	{
		is_bulby = true;
		for (i = 0; i < arr_len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				is_bulby = false;
			}
		}
		arr_len--;
	}
}