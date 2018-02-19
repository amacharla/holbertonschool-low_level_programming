#include "binary_trees.h"

/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: pointer to head node
 * Return: 0 if not full else 1 if full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left;
	int right;

	if (!tree) /* initial check null tree check */
		return (0);
	/* is child */
	if (!tree->left && !tree->right)
		return (1);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	return (left && right);
}
