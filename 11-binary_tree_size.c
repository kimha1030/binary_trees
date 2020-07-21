#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_size - Function that measures the size of a BT
 * @tree: pointer to the root node of the tree to traverse
 * Return: size_t
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lh, rh, size_bt;

	if (tree == NULL)
		return (0);
	lh = binary_tree_size(tree->left);
	rh = binary_tree_size(tree->right);
	size_bt = lh + rh + 1;
	return (size_bt);
}
