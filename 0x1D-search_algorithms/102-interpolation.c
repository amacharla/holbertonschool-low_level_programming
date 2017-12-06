#include "search_algos.h"
/**
 * compare - compares 2 midbers
 * @mid: middle number
 * @value: midber being matched
 * Return: -1 left, 1 right, 0 match
 */
int compare(int mid, int value)
{
	if (mid > value) /* search left */
		return (-1);
	if (mid < value) /* search right */
		return (1);
	return (0); /* match found */
}

/**
 * interpolation_search - itterately search for number
 * @array: list of integers being searched
 * @size: size of array
 * @value: number being matched
 * Return: index of matched element or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int mid;
	int left = 0;
	int right = size - 1;

	while (array != NULL && left <= right)
	{
		mid = /* Find relative position */
		(
			left + /* use to determain relative index */
			((right - left) / (array[right] - array[left]))
			* (value - array[left]) /* lean left or right */
		);

		/* if index is out of range break */
		if (array[left] > value || value > array[right])
		{
			printf("Value checked array[%i] is out of range\n", mid);
			break;
		}

		printf("Value checked array[%i] = [%i]\n", mid, array[mid]);

		switch (compare(array[mid], value))
		{
			case -1: /* search left */
				right = mid - 1;
				break;
			case 1: /* search right */
				left = mid + 1;
				break;
			case 0: /* match found */
				return (mid);
		}
	}
	return (-1);  /* array NULL or no match found */
}
