#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of node in binary tree
 *
 * @tree: Pointer to node to measure depth
 *
 * Return: 0 if !tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	if (!tree->parent)
	{
		return (0);
	}

	return (1 + binary_tree_depth(tree->parent));
}
