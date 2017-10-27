#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right; /*keep track of how many times children existed*/
				/*---------- if leaf ------------- */
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	/* ELSE child exist so `+1` and go into child */
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	/* if either side has node it returns +1 */
	return (left >= right ? left + 1 : right + 1);
}
