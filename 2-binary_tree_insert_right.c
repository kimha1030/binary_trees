#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - Function that inserts a node as the right-child
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: new_right
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right;

	if (parent == NULL)
		return (NULL);
	new_right = malloc(sizeof(binary_tree_t));
	if (new_right == NULL)
		return (NULL);
	new_right->n = value;
	new_right->parent = parent;
	new_right->left = NULL;
	new_right->right = parent->right;
	parent->right = new_right;
	if (new_right->right != NULL)
		new_right->right->parent = new_right;
	return (new_right);
}
