#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through binary tree using pre-oreder traversal
 *
 * @tree: Pointer to root node of tree to traverse
 *
 * @func: Pointer to function to call for each node
 * Value of node must be passed as parameter to this function
 * If !tree || !func, do nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
