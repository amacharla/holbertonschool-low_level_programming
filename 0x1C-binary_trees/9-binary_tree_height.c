#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;
			    /*---------- if leaf ------------- */
	if (tree == NULL || (tree && !(tree->left || tree->right)))
		return 0;
	else
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);

		return (left < right ? left + 1 : right + 1);
	}
}
