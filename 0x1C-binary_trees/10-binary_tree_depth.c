#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t count = 0;
	/* user `parent` attr to determin how far from parent you are */
	for (;node != NULL && node->parent != NULL; node = node->parent)
		count++;
	return count;
}
