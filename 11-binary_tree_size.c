#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree to measure the size of
 *
 * Return: size of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	/* y = left_size, x = right_size */

	size_t y = binary_tree_size(tree->left);
	size_t x = binary_tree_size(tree->right);

	return (x + y + 1);
}

