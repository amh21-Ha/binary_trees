#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: Pointer to the node to find the sibling.
 *
 * Return: Pointer to the sibling node. If node is NULL or the parent is NULL,
 *         return NULL. If node has no sibling, return NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (!node || !node->parent)
        return NULL;

    binary_tree_t *parent = node->parent;

    if (parent->left == node)
        return parent->right;
    else
        return parent->left;
}
