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
        if (left >= right)
                return (left + 1);
        else
                return (right + 1);
}



/**
 *  binary_tree_balance - function that measures the balance factor
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_side = binary_tree_height(tree->left);
	size_t right_side = binary_tree_height(tree->right);

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	return (left_side - right_side);
}
