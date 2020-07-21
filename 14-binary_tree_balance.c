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
 * binary_tree_balance - Function that measures the balance factor of a BT
 * @tree: pointer to the root node of the tree to traverse
 * Return: size_t
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lh, rh;
	size_t balance_factor = 0;

	if (tree == NULL)
		return (0);
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	balance_factor = lh - rh;
	return (balance_factor);
}
