#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return NULL;
	newnode->n = value;
	newnode->right = NULL;
	newnode->left = NULL;
	newnode->parent = parent;

	if (parent == NULL) /*create tree*/
		return newnode;

	if (parent->n > value) /*go left*/
		parent->left = newnode;
	else /*go right*/
		parent->right = newnode;

	return newnode;
}
