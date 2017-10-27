#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (2);

	count += binary_tree_is_perfect(tree->left);
	count += binary_tree_is_perfect(tree->right);
	return (count % 2 == 0);

}
