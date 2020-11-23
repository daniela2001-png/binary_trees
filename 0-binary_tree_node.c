#include "binary_trees.h"

/**
 * binary_tree_node - function that create a node in binary tree
 * @parent: is a pointer to my new_node
 * @value: is the value to insert inside the node
 * Return: the pointer to a new_node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *my_node = malloc(sizeof(struct binary_tree_s));

	if (my_node == NULL)
		return (NULL);
	my_node->n = value;
	my_node->left = NULL;
	my_node->right = NULL;
	my_node->parent = parent;

	if (parent == NULL)
		parent = my_node;
	return (my_node);
}
