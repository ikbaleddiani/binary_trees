#include "binary_trees.h"

/**
 * binary_tree_leaves - function that measures the leaves of a binary tree
 * @tree: the pointer to the root node of the tree to measure the number of
 * the leaves.
 *
 * Return: the leaves of the tree, 0 if node is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		leaves++;
	if (tree->left)
		leaves += binary_tree_leaves(tree->left);
	if (tree->right)
		leaves += binary_tree_leaves(tree->right);
	return (leaves);
}
