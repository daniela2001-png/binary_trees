<<<<<<< HEAD
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent:  pointer to the parent node of the node to create
 * @value:  value to put in the new node
 * Return: a pointer to the new node (binary_tree_t), or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
=======
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
>>>>>>> origin
}
