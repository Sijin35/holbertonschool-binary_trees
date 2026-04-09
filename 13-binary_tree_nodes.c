#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in binary tree
 *
 * @tree: Pointer to root node of tree to count the number of nodes
 *
 * Return: 0 if tree == NULL, NUll pointer != node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
	{
		return (0);
	}

	return (1 + (binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right)));
}
