#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that checks
 * if a binary tree is full
 *
 * @tree: Pointer to the root node
 *
 * Return: 1 if is full or 0
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int leftSide, rightSide;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{
		leftSide = binary_tree_is_full(tree->left);
		rightSide = binary_tree_is_full(tree->right);

		return (leftSide && rightSide);
	}

	return (0);
}
