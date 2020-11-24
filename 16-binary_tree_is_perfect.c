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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: an integer
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	if (tree->right == NULL || tree->left == NULL)
		return (0);
	/* verifico si las h son iguales en left y right*/
	/*ya que asi verifico si es perfecto*/
	if (binary_tree_height(tree->right) == binary_tree_height(tree->left))
	{
		if (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}
