#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *ptr, *pt;

	if (!first->parent || !second->parent)
		return (NULL);
	ptr = first;
	pt = second;
	while (ptr)
	{
		while (pt->parent)
		{
			if (pt->parent == ptr)
				return (pt->parent);
			pt = pt->parent;
		}
		pt = second;
		ptr = ptr->parent;
	}
	return (NULL);
}
