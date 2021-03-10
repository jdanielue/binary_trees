#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through a binary tree
 * @tree: pointer to the node to check
 * @func: pointer to a function to call for each node
 * Return: void
 */


void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (func != NULL && tree != NULL)
	{
		if (tree->left == NULL)
        {
            func(tree->n);
			return;
        }
		binary_tree_inorder(tree->left, func);
        func(tree->n);
		if (tree->right == NULL)
		{
            func(tree->n);
            return;
        }
		binary_tree_inorder(tree->right, func);
	}
}


void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (func != NULL && tree != NULL)
	{
		if (tree->left == NULL)
			return;

		binary_tree_inorder(tree->left, func);
        func(tree->n);
		if (tree->right == NULL)
            return;
		binary_tree_inorder(tree->right, func);
        func(tree->n);

	}
}

