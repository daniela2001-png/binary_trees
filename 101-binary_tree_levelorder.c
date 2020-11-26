#include "binary_trees.h"

/**
 * binary_tree_levelorder - goes through a bt using level-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 *        The value in the node must be passed as a parameter to this function.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (!tree->left || !tree->right)
		return;
	if (!tree->parent)
		func(tree->n);
	func(tree->left->n);
	func(tree->right->n);
	if (tree->left)
		binary_tree_levelorder(tree->left, func);
	if (tree->right)
		binary_tree_levelorder(tree->right, func);
}
