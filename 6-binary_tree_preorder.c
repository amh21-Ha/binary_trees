#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - Performs pre-order traversal of a binary tree.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * Note: The value in each node is passed as a parameter to the function.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
        return;

    /* Visit the current node */
    func(tree->n);

    /* Recur on left subtree */
    binary_tree_preorder(tree->left, func);
    }

/* Example usage */
void print_node_value(int value)
{
    printf("%d ", value);
}
