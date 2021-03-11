#include "binary_trees.h"

/**
 * binary_tree_height - function that goes through a binary tree
 * @tree: pointer to the node to check
 * Return: ghegiht of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter_l = 0, counter_r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
	{
		(counter_l = 1 + binary_tree_height(tree->left));
	}
	if (tree->right)
	{
		(counter_r = 1 + binary_tree_height(tree->right));
	}
	if (counter_l >= counter_r)
		return (counter_l);
	else
		return (counter_r);
}
