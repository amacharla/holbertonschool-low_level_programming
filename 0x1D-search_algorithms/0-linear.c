#include "search_algos.h"
/**
 * linear_search - searches for a value using the Linear search algorithm
 * @array: array of integers being searched
 * @size: size of array
 * @value: value looking for
 * Return: index of match else -1
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int  num;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			num = array[i];
			printf("Value checked array[%lu] = [%i]\n", i, num);

			if (num == value)
				return (i);
		}
	}
	return (-1);
}
