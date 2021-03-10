#include "binary_trees.h"
/**
 * binary_tree_delete - inserts a node as the left-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: A pointer
 */

void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;
    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);
    free(tree);

}