#include "binary_trees.h"

/**
 * binary_tree_nodes - counts node w/ atleast 1 child
 * @tree: pointer to root node
 * Return: count of nodes with atleast 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	return (count + 1);
}
