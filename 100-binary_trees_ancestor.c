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
/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: Pointer to the lowest common ancestor node. If no common ancestor
 *         was found, return NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
                                     const binary_tree_t *second)
{
    if (!first || !second)
        return NULL;
    size_t depth_first = binary_tree_depth(first);
    size_t depth_second = binary_tree_depth(second);

    // Move the deeper node up to the same depth
    while (depth_first > depth_second)
    {
        first = first->parent;
        depth_first--;
    }

    while (depth_second > depth_first)
    {
        second = second->parent;
        depth_second--;
    }

    // Move both nodes up until they meet at the LCA
    while (first != second)
    {
	    first = first->parent;
        second = second->parent;
    }

    return (binary_tree_t *)first; // Cast to avoid const
}
