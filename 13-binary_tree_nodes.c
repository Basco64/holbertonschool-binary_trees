#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts the nodes
 * with at least 1 child in a binary tree
 *
 * @tree: Pointer to the root node
 *
 * Return: The number of non-leaf nodes
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodeAtLeft, nodeAtRight;

	if (tree == NULL)
		return (0);

	if ((tree->left != NULL) || (tree->right != NULL))
	{
		nodeAtLeft = binary_tree_nodes(tree->left);
		nodeAtRight = binary_tree_nodes(tree->right);

		return (nodeAtLeft + nodeAtRight + 1);
	}

	return (0);
}
