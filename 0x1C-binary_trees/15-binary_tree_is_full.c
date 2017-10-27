#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)/* initial NULL check */
		return (0);

	/* return 1 if is child */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	return (left && right);
	/* if both return 1 then node has 2 children == full
	 * else not full
	 */
}
