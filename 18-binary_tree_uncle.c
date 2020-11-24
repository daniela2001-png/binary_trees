#include "binary_trees.h"

/**
 * binary_tree_is_leaf - measures the height of a binary tree
 * @node: a pointer to the root node of the tree to measure the height.
 * Return: size of the tree (size_t)
*/
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
	size_t der, izq = 0;

	if (!tree || binary_tree_is_leaf(tree))
		return (0);
	der = binary_tree_height(tree->right);
	izq = binary_tree_height(tree->left);
	if (der > izq)
		return (der + 1);
	return (izq + 1);
}

/**
 * binary_tree_uncle - checks if a node had a uncle
 * @node: pointer to the root node of the tree to check
 * Return: a pointer to uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	/* lado izq 128 y el lado derecho  128*/
	if (node->parent->parent->right == node->parent)
		/* y aqui tenemos al tio 12*/
		return (node->parent->parent->left);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (NULL);
}
