#include "binary_trees.h"

/**
 * binary_tree_size - function that goes through a binary tree
 * @tree: pointer to the node to check
 * Return: counter
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
size_t counter_l = 0, counter_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
	{
		counter_r = binary_tree_size(tree->right);
		counter_l = binary_tree_size(tree->left);
		counter_l += 1;
	}

	if (tree->left && tree->parent != NULL)
		(counter_l = 1 + binary_tree_size(tree->left));
	if (tree->right && tree->parent != NULL)
		(counter_r = 1 + binary_tree_size(tree->right));

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (counter_l + counter_r);
}
