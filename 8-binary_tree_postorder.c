#include "binary_trees.h"

/**
 * binary_tree_postorder - Function that goes through
 * a binary tree using post-order traversal
 *
 * @tree: Pointer to the root node
 * @func: Pointer to a function to call
 *
 * Return: Nothing
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
