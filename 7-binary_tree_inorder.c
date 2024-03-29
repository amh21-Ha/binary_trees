#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - Performs in-order traversal of a binary tree.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * Note: The value in each node is passed as a parameter to the function.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

    /* Recur on left subtree */
	binary_tree_inorder(tree->left, func);
}
/**
 * print_node_value - print the value of node as Example usage
 *@value: The value of node pass to print
 */
void print_node_value(int value)
{
	printf("%d ", value);
}

