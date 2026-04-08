#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as left-child of another node
 *
 * @parent: Pointer to node to insert the left-child in
 *
 * @value: Value to store in new node
 *
 * Return: Pointer to created node, NULL on failure || parent == NULL
 * If parent has left-child, new node must take its place
 * Old left-child becomes left-child of new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
