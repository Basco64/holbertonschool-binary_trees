#include "binary_trees.h"

/**
 * binary_tree_delete - Function that deletes an
 * entire binary tree
 *
 * @tree: Pointer to the root node
 *
 * Return: Nothing
*/

void binary_tree_delete(binary_tree_t *tree);
{
	binary_tree_t *tmp;

	if (tree == NULL)
		return;

	

	free(tree);
}
