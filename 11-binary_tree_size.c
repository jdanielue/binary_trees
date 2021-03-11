#include "binary_trees.h"

/**
 * binary_tree_siz_r - function that goes through a binary tree
 * @tree: pointer to the node to check
 * @counter: counter
 * Return: nothing
 */

void binary_tree_size_r(const binary_tree_t *tree, size_t *counter)
{
	if (tree->left)
		binary_tree_size_r(tree->left, counter);
	if (tree->right)
		binary_tree_size_r(tree->right, counter);

	*counter += 1;
}

/**
 * binary_tree_size - function that goes through a binary tree
 * @tree: pointer to the node to check
 * Return: counter
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t counter = 1;

	if (tree == NULL)
		return (0);

	binary_tree_size_r(tree, &counter);
	return (counter);
}
