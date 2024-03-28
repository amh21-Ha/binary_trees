#include <stdlib.h>
#include "binary_trees.h"

/**
 * * binary_tree_insert_left - Inserts
 * a new node as the left child of a parent node.
 * @parent: Pointer to the parent node.
 * @value: Value to store in the new node.
 * Return: Pointer to the created node, or
 * NULL on failureor if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->right = NULL;

	if (parent->left)
		parent->left->parent = new_node;

	parent->left = new_node;

	return (new_node);
}
