#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree != NULL)
	{	/* if noad is leaf */
		if (tree->left == NULL && tree->right == NULL)
			count++;
		else /* count leaves */
		{
			count += (tree->left) ? 1 : 0;
			count += (tree->right) ? 1 : 0;
		}
	}
	return count;
}
