#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures
 * the height of a binary tree
 *
 * @tree: Pointer to the root node
 *
 * Return: The height of the binary tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_is_perfect - Function that checks
 * if a binary tree is perfect
 *
 * @tree: Pointer to the root node
 *
 * Return: 1 if is perfect or 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leftSideHeight, rightSideHeight;
	int leftSide, rightSide;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	leftSideHeight = binary_tree_height(tree->left);
	rightSideHeight = binary_tree_height(tree->right);

	if (leftSideHeight == rightSideHeight)
	{
		leftSide = binary_tree_is_perfect(tree->left);
		rightSide = binary_tree_is_perfect(tree->right);

		return (leftSide && rightSide);
	}

	return (0);
}
