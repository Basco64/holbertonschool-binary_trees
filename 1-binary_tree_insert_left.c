#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a
 * node as the left-child of another node
 *
 * @parent: The parent
 * @value: The new value
 *
 * Return: The new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		parent->left->parent = newNode;
		newNode->left = parent->left;
	}
	else
		newNode->left = NULL;

	parent->left = newNode;
	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;

	return (newNode);
}
