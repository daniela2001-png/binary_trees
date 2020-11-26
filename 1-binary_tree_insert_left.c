#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node to left
 * @parent: is a pointer to my my_node
 * @value: is the value to insert inside the node
 * Return: the pointer to a my_node to left
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *my_node;

	if (!parent)
		return (NULL);
	my_node = malloc(sizeof(binary_tree_t));
	if (!my_node)
		return (NULL);
	my_node->left = NULL;
	my_node->right = NULL;
	my_node->parent = parent;
	my_node->n = value;
	if (parent->left)
	{
		my_node->left = parent->left;
		my_node->left->parent = my_node;
	}
	parent->left = my_node;
	return (my_node);
}
