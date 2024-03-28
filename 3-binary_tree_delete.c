#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: Pointer to the root node of the tree to delete.
 *
 * Note: This function recursively frees memory for each node in the tree.
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (!tree)
        return;
    /* Recursively delete left and right subtrees */
    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);

    /* Free memory for the current node */
    free(tree);
}
