#include "binary_trees.h"


/**
 * binary_tree_leaves_r - function that goes through a binary tree
 * @tree: pointer to the node to check
 * @counter: counter
 * Return: nothing
 */


void binary_tree_leaves_r(const binary_tree_t *tree, size_t *counter)
{
	if (tree->left)
		binary_tree_leaves_r(tree->left, counter);

	if (tree->right)
		binary_tree_leaves_r(tree->right, counter);

	if (tree->left == NULL && tree->right == NULL)
		*counter += 1;
}


/**
 * binary_tree_leaves - function that goes through a binary tree
 * @tree: pointer to the node to check
 * Return: leaf
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);

	binary_tree_leaves_r(tree, &counter);
	return (counter);
}
