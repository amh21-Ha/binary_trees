#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - Performs post-order traversal of a binary tree.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * Note: The value in each node is passed as a parameter to the function.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
        return;

    /* Recur on left subtree */
    binary_tree_postorder(tree->left, func);

    /* Recur on right subtree */
    binary_tree_postorder(tree->right, func);
    
    /* Visit the current node */
    func(tree->n);
}

/* Example usage */
void print_node_value(int value)
{
    printf("%d ", value);
}
