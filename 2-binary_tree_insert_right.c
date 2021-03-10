#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the left-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: A pointer
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = NULL;
	new_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->n = value;
		new_node->right = parent->right;
		parent->right = new_node;
		new_node->left = NULL;
		new_node->parent = parent;
	}
	else
	{
		new_node->n = value;
		parent->right = new_node;
		new_node->right = NULL;
		new_node->left = NULL;
		new_node->parent = parent;
	}

	return (new_node);
}
