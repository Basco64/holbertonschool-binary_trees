#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the
 * depth of a node in a binary tree
 *
 * @tree: Pointer to the node to measure the depth
 *
 * Return: The depth of a node
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *tmp;

	if (tree == NULL)
		return (0);

	tmp = tree->parent;

	while (tmp != NULL)
	{
		tmp = tmp->parent;
		depth++;
	}

	return (depth);
}
