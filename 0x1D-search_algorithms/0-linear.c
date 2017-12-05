#include "search_algos.h"

int linear_search(int *array, size_t size, int value) {

	int i, num;

	if (array) {
		for (i = 0; i < size; i++) {
			num = array[i];
			printf("Value check array[%i] = [%i]", i, num);

			if (num == value) {
				printf("Found %i at index: %i", value, i);
				return (i);
			}
		}
	}
	return (-1);
}
