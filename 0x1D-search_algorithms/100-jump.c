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
	int jump = (int) sqrt(size);

	for (i = 0; i < size; i += jump)
	{
		if (array[i] == value)
			return (i);
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] > value)
		{
			size = i;
			i -= jump;
			jump = 1;
			printf("Value found between indexes [%lu] and [%lu]\n", i, size);
		}
	}
	return (-1);
}
