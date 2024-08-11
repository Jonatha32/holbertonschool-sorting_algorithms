#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: Array to sort
 * @size: Size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp = 0;
	size_t minElement;

	for (i = 0; i < size - 1; i++)
	{
		minElement = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minElement])
			{
				minElement = j;
			}
		}

		if (minElement != i)
		{
			temp = array[i];
			array[i] = array[minElement];
			array[minElement] = temp;
			print_array(array, size);
		}
	}
}
