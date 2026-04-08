#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as right-child of another node
 *
 * @parent: Pointer to node to insert the right-child in
 *
 * @value: Value to store in new node
 *
 * Return: Pointer to created node, NULL on failure || parent == NULL
 * If parent has right-child, new node must take its place
 * Old right-child becomes right-child of new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);

	if (!new_node)
	{
		return (NULL);
	}

	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
