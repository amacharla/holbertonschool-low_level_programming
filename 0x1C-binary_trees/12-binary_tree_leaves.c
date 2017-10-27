#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL) /* for first pass if get sent no tree*/
		return (0);

	/* if leave node then return 1*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);
	return (count); /*bring back count to root & sum both sides*/
}
