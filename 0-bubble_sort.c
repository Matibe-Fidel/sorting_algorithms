#include "sort.h"

/**
 * bubble_sort - sorts an array of integers using bubble sort
 * array is sorted in ascending order
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */

void bubble_sort(int *array, size_t size)
{
	int check = 1, holder = 0;
	unsigned int i = 0;


	while (check)
	{
		check = 0;
		for (i = 0; i < size; i++)
		{
			if (i == 0)
				continue;
			if (array[i] < array[i - 1])
			{
				check = 1;
				holder = array[i];
				array[i] = array[i - 1];
				array[i - 1] = holder;
				print_array(array, size);
			}
		}
	}
}
