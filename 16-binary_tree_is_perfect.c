#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: is a pointer to node to checks
 * Return: 0 if not is a leaft or 1 if it is
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
        if (node->left == NULL && node->right == NULL)
                return (1);
        return (0);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: size of the tree (size_t)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
        if (!tree)
                return (0);
        if (binary_tree_is_leaf(tree))
                return (1);
        return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
/**
 * binary_tree_leaves - measures the leaves of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: size of the tree (size_t)
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
        if (!tree)
                return (0);
        if (binary_tree_is_leaf(tree))
                return (1);
        else
                return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree:  pointer to the root node of the tree to count the number of nodes
 * Return: size of the tree (size_t)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
        if (!tree)
                return (0);
        if (tree->left || tree->right)
                return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
        else
                return (0);
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
	if(binary_tree_size(tree) < (binary_tree_nodes(tree) + binary_tree_leaves(tree)))
		return (0);
	else
		return (1);
}
