#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that counts the leaves in a binary tree
 *
 * @tree: Pointer to the root node
 *
 * Return: The number of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leftSide, rightSide;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	leftSide = binary_tree_leaves(tree->left);
	rightSide = binary_tree_leaves(tree->right);

	return (leftSide + rightSide);
}
