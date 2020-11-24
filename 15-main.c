#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;
	int full;

	root = binary_tree_node(NULL, 0);
	binary_tree_print(root);

	full = binary_tree_is_full(root);
	printf("Is %d full: %d\n", root->n, full);
	return (0);
}