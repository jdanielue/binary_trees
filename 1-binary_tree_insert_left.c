#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: A pointer
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = NULL;
	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->n = value;
		new_node->left = parent->left;
		parent->left = new_node;
		new_node->right = NULL;
		new_node->parent = parent;
	}
	else
	{
		new_node->n = value;
		parent->left = new_node;
		new_node->left = NULL;
		new_node->right = NULL;
		new_node->parent = parent;
	}

	return (new_node);
}
