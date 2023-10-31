#include "binary_trees.h"

/*
 * binary_tree_node - Creates a new binary tree node
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return:  pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* Declaring the data type of new node */
	binary_tree_t *new_node;

	/* Allocate memory to the new node */
	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	/* Return NULL on failure */
	if (new_node == NULL)
	{
		return NULL;
	}

	/* Allocate values to the node */
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	/* Return pointer to the new node */
	return new_node;
}

