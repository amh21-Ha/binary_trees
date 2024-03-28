#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Number of leaves in the binary tree. If tree is NULL, return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if (!tree)
        return 0;

    if (!tree->left && !tree->right)
        return 1; // Current node is a leaf

    size_t left_leaves = binary_tree_leaves(tree->left);
    size_t right_leaves = binary_tree_leaves(tree->right);
    
    return left_leaves + right_leaves;
}
