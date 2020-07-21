#include <stdlib.h>
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

/**
 * binary_tree_is_perfect - Function that checks if a BT is perfect
 * @tree: pointer to the root node of the tree to traverse
 * Return: size_t
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l_height, r_height;
	binary_tree_t *lef = tree->left, *rig = tree->right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (1);
	l_height = binary_tree_height(lef);
	r_height = binary_tree_height(rig);
	if (l_height == r_height)
	{
		if (binary_tree_is_perfect(lef) && binary_tree_is_perfect(rig))
			return (1);
	}
	return (0);
}
