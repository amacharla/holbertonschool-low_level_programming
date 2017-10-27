#include "binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL || (tree->left && tree->right))
		return 0;
	else if (tree->left || tree->right)
		return 1;
	else
	{
		left += binary_tree_nodes(tree->left);
		right += binary_tree_nodes(tree->right);

		return (left > right ? left + 1 : right);
	}
}
