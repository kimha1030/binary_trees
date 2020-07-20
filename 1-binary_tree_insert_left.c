#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - Function that inserts a node as the left-child
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: new_left
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;

	if (parent == NULL)
		return (NULL);
	new_left = malloc(sizeof(binary_tree_t));
	if (new_left == NULL)
		return (NULL);
	new_left->n = value;
	new_left->parent = parent;
	new_left->right = NULL;
	new_left->left = parent->left;
	parent->left = new_left;
	if (new_left->left != NULL)
		new_left->left->parent = new_left;
	return (new_left);
}
