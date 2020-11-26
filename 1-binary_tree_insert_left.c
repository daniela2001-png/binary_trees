#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node to left
 * @parent: is a pointer to my new_node
 * @value: is the value to insert inside the node
 * Return: the pointer to a new_node to left
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = new_node = binary_tree_node(parent, value);

	if (!new_node || !parent)
		return (NULL);
	if (parent->left != NULL)
		binary_tree_insert_left(new_node, parent->left->n);
	parent->left = new_node;
	return (new_node);
}
