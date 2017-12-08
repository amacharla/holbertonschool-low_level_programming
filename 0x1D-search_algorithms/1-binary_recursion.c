#include "search_algos.h"
/**
 * divide_conquer - helper func used for recurssion
 * @array: list of integers being searched
 * @start: begenning index
 * @end: ending index
 * @value: number being matched
 * Return: index of matched element or -1
 */
int divide_conquer(int *array, int start, int end, int value)
{
	int i, mid = (start + end) / 2;

	if (array != NULL && start < mid && mid < end)
	{
		printf("Searching in array: %i", array[start]);
		for (i = start + 1; i <= end; i++)
			printf(", %i", array[i]);
		printf("\n");
		if (array[mid] > value)
			return (divide_conquer(array, start, mid, value));
		else if (array[mid] < value)
			return (divide_conquer(array, mid, end, value));
		else
			return (mid);
	}
	return (-1);
}

/**
 * binary_search - recursively searches via divide and conquer method.
 * @array: list of integers being searched
 * @size: size of array
 * @value: number being matched
 * Return: index of matched element or -1
 */
int binary_search(int *array, size_t size, int value)
{
	return (divide_conquer(array, 0, size - 1, value));
}
