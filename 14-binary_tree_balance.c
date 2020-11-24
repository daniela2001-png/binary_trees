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
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: size of the tree (size_t)
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t der, izq;

	if (!tree)
		return (0);
	der = binary_tree_height(tree->right);
	izq = binary_tree_height(tree->left);
	if (der >= izq)
		return (der + 1);
	return (izq + 1);
}

/**
 * binary_tree_balance - function that measures the balance factor of a tree
 * @tree:  pointer to the root node of the tree to count the number of nodes
 * Return: a integer
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int i, j;

	if (!tree)
		return (0);
	i = binary_tree_height(tree->left);
	j = binary_tree_height(tree->right);
	return (i - j);
}
