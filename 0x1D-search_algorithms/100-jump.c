#include "search_algos.h"
#include <math.h>
/**
 * jump_search - incremmently goes through array then linearly
 * @array: list of integers being searched
 * @size: size of array
 * @value: number being matched
 * Return: index of matched element or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i;
	int jump;

	if (array == NULL || size == 0) /* argument check */
		return (-1);

	jump = (int) sqrt(size); /* skip interval */

	for (i = 0; i < size; i += jump) /* start off skipping */
	{
		if (array[i] == value)
			return (i);
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] > value) /*reset params to preform linear search*/
		{
			size = i;  /* know the value is less than index i */
			i -= jump; /* jump one level back */
			jump = 1; /*linear search */
			printf("Value found between indexes [%lu] and [%lu]\n", i, size);
		}
	}
	return (-1); /* no match found */
}
