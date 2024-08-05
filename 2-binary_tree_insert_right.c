#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function that inserts a
 * node as the right-child of another node
 *
 * @parent: The parent
 * @value: The new value
 *
 * Return: The new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	if (parent->right != NULL)
		newNode->right = parent->right;
	else
		newNode->right = NULL;

	parent->right = newNode;
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;

	return (newNode);
}
