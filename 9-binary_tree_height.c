#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: size of the tree (size_t)
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t level = 0;

	if (!tree)
		return (0);
	if (tree->left)
		binary_tree_height(tree->left), level++;
	if (tree->right)
		binary_tree_height(tree->right), level++;
	return (level);
}
