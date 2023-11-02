#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: tree to count the leaves from
 *
 * Return: number of leaves
 *         0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	
	/* y = leaves on left and x = leaves on right */
	size_t y = binary_tree_leaves(tree->left);
	size_t x = binary_tree_leaves(tree->right);

	return (x + y);
}

