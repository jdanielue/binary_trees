#include "binary_trees.h"

/**
 * binary_tree_postorder - function that goes through a binary tree
 * @tree: pointer to the node to check
 * @func: pointer to a function to call for each node
 * Return: 1 if is root
 */


void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func != NULL && tree != NULL)
	{
		if (tree->left != NULL)
			binary_tree_postorder(tree->left, func);
		if (tree->right != NULL)
			binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
