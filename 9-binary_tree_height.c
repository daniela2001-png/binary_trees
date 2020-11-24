#include "binary_trees.h"



int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
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
	//size_t level = 0;
	size_t der, izq = 0;

	if (!tree || binary_tree_is_leaf(tree))
		return (0);
	der = binary_tree_height(tree->right);
	izq = binary_tree_height(tree->left);
	if (der > izq)
		return der + 1;
	return izq + 1;
}
