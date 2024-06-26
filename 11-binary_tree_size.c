#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_size - Calculates the size (number of nodes) of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Size of the binary tree. If tree is NULL, return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (!tree)
        return 0;

    size_t left_size = binary_tree_size(tree->left);
    size_t right_size = binary_tree_size(tree->right);

    return 1 + left_size + right_size;
}
