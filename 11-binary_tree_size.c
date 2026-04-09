#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of binary tree
 *
 * @tree: Pointer to root node of tree
 *
 * Return: 0 if tree == NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int left, right;
	
	if (!tree)
	{
		return (0);
	}

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (left + right + 1);
}
