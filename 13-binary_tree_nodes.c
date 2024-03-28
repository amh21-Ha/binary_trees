#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of nodes with at least one child.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Number of internal nodes in the binary tree. If tree is NULL, return 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (!tree)
        return 0;

    size_t left_nodes = binary_tree_nodes(tree->left);
    size_t right_nodes = binary_tree_nodes(tree->right);

    // If the current node has at least one child, count it as an internal node
    return (left_nodes + right_nodes + (tree->left || tree->right));
}
