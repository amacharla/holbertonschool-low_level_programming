#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @node: pointer to the node thats depth is relative to
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t count = 0;
	/* user `parent` attr to determin how far from parent you are */
	for (; node != NULL && node->parent != NULL; node = node->parent)
		count++;
	return (count);
}
