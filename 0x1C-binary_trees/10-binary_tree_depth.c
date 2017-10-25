#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t count = 0;

	for (; node; node = node->parent)
		count++;
	return count - 1;
}
