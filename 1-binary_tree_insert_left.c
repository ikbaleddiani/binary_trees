#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 * @parent: A pointer to the parent node where the new left
 * child node will be inserted
 * @value: The integer value to be assigned to the new left child node.
 *
 * Return: pointer to the created node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_child;

	if (parent == NULL)
		return (NULL);

	new_child = binary_tree_node(parent, value);
	if (new_child == NULL)
		return (NULL);
	new_child->left = parent->left;
	if (new_child->left != NULL)
		new_child->left->parent = new_child;
	parent->left = new_child;
	return (new_child);
}
