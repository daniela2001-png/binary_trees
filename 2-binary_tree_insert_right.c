#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node to right
 * @parent: is a pointer to my new_node
 * @value: is the value to insert inside the node
 * Return: the pointer to a new_node to left
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *my_node = NULL;

	if (parent == NULL)
		return (NULL);

	my_node = malloc(sizeof(binary_tree_t));

	if (my_node == NULL)
		return (NULL);

	my_node->left = NULL;
	my_node->right = NULL;
	my_node->parent = parent;
	my_node->n = value;

	if (parent->right)
	{
		/* right del 54 es 12*/
		my_node->right = parent->right;
		/* aqui el padre de 12 pase de ser de 98 a 54 :3 */
		my_node->right->parent = my_node;
	}
	/* aqui asigno la izquierda al padre si o si siempre */
	parent->right = my_node;
	return (my_node);
}
