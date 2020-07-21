#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_height - Function that measures the height of a BT
 * @tree: pointer to the root node of the tree to traverse
 * Return: size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	if (lh >= rh)
	{
		return (1 + lh);
	}
	else
	{
		return (1 + rh);
	}
}
