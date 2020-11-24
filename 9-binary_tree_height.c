#include "binary_trees.h"

/**
 * binary_tree_postorder -  through a binary tree using post-order traversal
 * @tree: tree is a pointer to the root node of the tree to traverse
 * @func:func is a pointer to a function to call for each node.
 * Return: void
*/

int max(int num1, int num2)
{
	return (num1 > num2 ) ? num1 : num2;
}

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t level = 0;

	if (!tree && !tree->right && !tree->left)
		return (0);
	if (tree->left != NULL)
	{	
		level ++;
		binary_tree_height(tree->left);
	}

	if (tree->right != NULL)
	{
		level ++;
		binary_tree_height(tree->right);
	}

	return level;
}
