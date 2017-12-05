#include "search_algos.h"

int divide_conquer(int *array, int start, int end, int value)
{
	int i;
	int mid = (start + end) / 2;

	if (array == NULL)
		return (-1);

	printf("Searching in array: %i", array[start]);
	for (i = start + 1; i < end; i++)
		printf(", %i", array[i]);
	printf("\n");

	if (array[mid] < value)
		return (divide_conquer(array, mid, end, value));
	else if (array[mid] > value)
		return (divide_conquer(array, start, mid, value));
	else if (array[mid] == value)
		return (mid);
	else
		return (-1);
}

int binary_search(int *array, size_t size, int value)
{
	return (divide_conquer(array, 0, size - 1, value));
}
