#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: size of the tree (size_t)
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t level = 0;

	if (!tree)
		return (0);
	if (!tree->parent)
		return (0);
	while (tree->parent != NULL)
	{
		level++;
		tree = tree->parent;
	}
	return (level);
}
