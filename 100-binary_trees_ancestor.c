#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *uno, *dos;

	if (!first->parent || !second->parent)
		return (NULL);
	if (first == second)
		return (NULL);
	uno = first;
	dos = second;
	while (uno)
	{
		while (dos)
		{
			if (dos->parent == uno)
				return (dos->parent);
			dos = dos->parent;
		}
		dos = second;
		uno = uno->parent;
	}
	return (NULL);
}
