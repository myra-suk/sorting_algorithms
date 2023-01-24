#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - Funtion that sorts an array of integers
 * in ascending order using th bubble sort algorithm
 * @array: array of integers
 * @size: size of array
 * Return: No return
 **/
void bubble_sort(int *array, size_t size)
{
	size_t c, j;
	int tmp, swap;

	for (j = size, swap = 1; j > 0 && swap; j--)
	{
		swap = 0;
		for (c = 0; (c + 1) < j; c++)
		{
			if (array[i] > array[c + 1])
			{
				tmp = array[c + 1];
				tmp = array[c + 1];
				array[c] = tmp;
				print_array(array, size);
				swap = 1;
			}
		}
	}
}
