#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Calculates the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: Depth of the node. If tree is NULL, return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (!tree)
        return 0;

    size_t depth = 0;
    const binary_tree_t *current = tree;

    while (current->parent)
    {
        depth++;
	current = current->parent;
    }

    return depth;
}
