#include "binary_trees.h"
/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: parent of node to be made
 * @value: value of new node
 *
 * Return: a pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	if (parent != NULL)
	{
		if (parent->n < value)
		{
			parent->right = newNode;
		}
		else
		{
			parent->left = newNode;
		}
	}
	return (newNode);
}
