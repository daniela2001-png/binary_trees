#include "binary_trees.h"


/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: is a pointer to node to checks
 * Return: 0 if not is a leaft or 1 if it is
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_is_full - function that measures if a tree is full or not
 * @tree:  pointer to the root node of the tree to count the number of nodes
 * Return: a integer
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	if ((tree->right) && (tree->left))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
