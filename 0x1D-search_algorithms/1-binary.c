#include "search_algos.h"
/**
 * compare = compares 2 midbers
 * @mid: middle number
 * @value: midber being matched
 * Return: -1 left, 1 right, 0 match
 */
int compare(int mid, int value)
{
	if (mid > value) // search left
		return -1;
	if (mid < value) // search right
		return 1;
	return 0; // match found
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
	int i, mid;
	int left = 0;
	int right = size -1;

	while ( array != NULL && left <= right)
	{
		mid = (left + right) / 2; // get mid

		// Printing sub array thats being searched
		printf("Searching in array: %i", array[left]);
		for (i = left + 1; i <= right; i++)
			printf(", %i", array[i]);
		printf("\n");

		switch ( compare(array[mid], value) )
		{
			case -1: // search left
				right = mid - 1;
				break;
			case 1: // search right
				left = mid + 1;
				break;
			case 0: // match found
				return mid;
		}
	}
	return -1;  // array NULL or no match found
}
