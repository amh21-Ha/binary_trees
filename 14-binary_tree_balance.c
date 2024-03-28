#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Calculates the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Height of the binary tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (!tree)
        return 0;

    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    return (left_height > right_height) ? left_height + 1 : right_height + 1;
}

/**
 * binary_tree_balance - Calculates the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Balance factor of the binary tree. If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    if (!tree)
        return 0;
    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    return (int)(left_height - right_height);
}
