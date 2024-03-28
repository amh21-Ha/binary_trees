#include "binary_trees.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_levelorder - Performs level-order traversal of a binary tree.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * Note: The value in each node is passed as a parameter to the function.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
        return;

    binary_tree_t *queue[1000]; // Assuming a maximum of 1000 nodes
    int front = 0, rear = 0;

    queue[rear++] = (binary_tree_t *)tree;

    while (front < rear)
    {
	    binary_tree_t *current = queue[front++];
        func(current->n);

        if (current->left)
            queue[rear++] = current->left;
        if (current->right)
            queue[rear++] = current->right;
    }
}

/* Example usage */
void print_node_value(int value)
{
    printf("%d ", value);
}

