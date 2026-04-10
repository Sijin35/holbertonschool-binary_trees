#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if binary tree is full
 *
 * @tree: Pointer to root node of tree to check
 *
 * Return: 0 if !tree, 1 if full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
	{
		return (1);
	}

	if (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right))
	{
		return (1);
	}

	return (0);
}
