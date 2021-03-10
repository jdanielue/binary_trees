#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through a binary tree
 * @tree: pointer to the node to check
 * @func: pointer to a function to call for each node
 * Return: 1 if is root
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func != NULL && tree != NULL)
		func(tree->n);
		if (tree->left == NULL)
			return;
		binary_tree_preorder(tree->left, func);
		if (tree->right == NULL)
			return;
		binary_tree_preorder(tree->right, func);
}
