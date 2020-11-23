#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node to left
 * @parent: is a pointer to my new_node
 * @value: is the value to insert inside the node
 * Return: the pointer to a new_node to left
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *my_node = malloc(sizeof(struct binary_tree_s));

	if (my_node == NULL)
		return (NULL);
	my_node->n = value;
	my_node->left = NULL;
	my_node->right = NULL;
	my_node->parent = parent;

	if (parent == NULL)
		parent = my_node;
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