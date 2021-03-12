#include "binary_trees.h"

/**
 * binary_tree_balance - function that goes through a binary tree
 * @tree: pointer to the node to check
 * Return: balance
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t counter_l = 0, counter_r = 0;
    int result = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		(counter_l = 1 + binary_tree_balance(tree->left));
	if (tree->right)
		(counter_r = 1 + binary_tree_balance(tree->right));

	result = counter_l - counter_r;
		return (result);

}
