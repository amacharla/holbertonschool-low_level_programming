#include "search_algos.h"

/**
 * compare - compares two numbers
 * @num:  value at index
 * @value: number looking for
 * Return: -1 (look left) 1 (look right) 0 (match found)
 */
int compare(int num, int value)
{
	if (num < value) /* look left */
		return (-1);
	if (num > value) /* look right */
		return (1);

	return (0);
}

/**
 * print_array - print array
 * @array: pointer to the first element of the array to search in
 * @left: start postion
 * @right: end position
 */
void print_array(int *array, int left, int right)
{
	int i;

	printf("Searching in array: %i", array[left]);
	for (i = left + 1; i <= right; i++)
		printf(", %i", array[i]);
	printf("\n");
}

/**
 * binary_search - uses binary search to find match with value
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: is the number searching for
 * Return: -1 if not found or index of the number that matches value
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;

	if (!array) /* if array is null */
		return (-1);

	while (left <= right) /* start binary search */
	{
		print_array(array, left, right);

		mid = (left + right) / 2;

		switch (compare(array[mid], value))
		{
			case 0: /* match found */
				return (mid);

			case 1: /* look left */
				right = mid - 1;
				break;

			case -1: /* look right */
				left = mid + 1;
				break;
		}
	}
	return (-1); /* no match found */
}

