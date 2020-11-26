#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a node is root
 * @node: is a pointer to node to checks
 * Return: 0 if not is a root or 1 if it is
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent == NULL && node)
		return (1);
	return (0);
}
