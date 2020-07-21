#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - Function that measures the depth of a node in a BT
 * @tree: pointer to the root node of the tree to traverse
 * Return: size_t
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (count);
	while (tree->parent != NULL)
	{
		count++;
		tree = tree->parent;
	}
	return (count);
}
