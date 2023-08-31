#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the right-child
 * @parent: A pointer to the parent node where the new right
 * child node will be inserted
 * value: The integer value to be assigned to the new right child node.
 *
 * Return: pointer to the created node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_child;

	if (parent == NULL)
		return (NULL);
	
	new_child = binary_tree_node(parent, value);
	if (new_child == NULL)
		return (NULL);
	new_child->right = parent->right;
	if (new_child->right != NULL)
		new_child->right->parent = new_child;
	parent->right = new_child;
	return (new_child);
}
