#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node as left-child of another node
 * @parent: pointer to node to insert left-child
 * @value: value to store in new node
 * Return: pointer to created node or NULL on failure if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	if (parent == NULL) /*create tree*/
		return (NULL);
	else
	{
		newnode->left = parent->left;
		if (parent->left != NULL)
			parent->left->parent = newnode;
		if (newnode == NULL)
			return (NULL);
		parent->left = newnode;
	}
	return (newnode);
}
