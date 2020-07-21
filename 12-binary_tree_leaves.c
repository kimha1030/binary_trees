#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_leaves - Function that counts the leaves in a BT
 * @tree: pointer to the root node of the tree to traverse
 * Return: size_t
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
		size_t lh, rh;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
		return (1);
	lh = binary_tree_leaves(tree->left);
	rh = binary_tree_leaves(tree->right);
	if (lh >= rh)
	{
		return (lh + 1);
	}
	else
	{
		return (rh + 1);
	}
}
