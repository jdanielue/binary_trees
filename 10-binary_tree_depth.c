#include "binary_trees.h"

/**
 * binary_tree_depth_r - function that goes through a binary tree
 * @tree: pointer to the node to check
 * @counter: counter
 * Return: counter
 */

void binary_tree_depth_r(const binary_tree_t *tree, size_t *counter)
{
	if (tree->parent)
	{
		binary_tree_depth_r(tree->parent, counter);
		*counter += 1;
	}
}

/**
 * binary_tree_depth - function that goes through a binary tree
 * @tree: pointer to the node to check
 * Return: counter
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);

	binary_tree_depth_r(tree, &counter);

	return (counter);
}
