#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: 1 if the tree is full, otherwise 0. If tree is NULL, return 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (!tree)
        return 0;

    // If the current node has exactly one child, it's not full
    if ((tree->left && !tree->right) || (!tree->left && tree->right))
        return 0;

    // Recursively check left and right subtrees
    return binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
}
