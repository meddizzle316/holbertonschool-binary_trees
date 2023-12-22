#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * @parent: parent of node to be inserted
 * @value: new node value
 *
 * Return: a pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	if (parent != NULL)
	{
		if (parent->right == NULL)
		{
			parent->right = newNode;
		}
		else if (parent->right != NULL)
		{
			newNode->right = parent->right;
			parent->right->parent = newNode;
			parent->right = newNode;
		}
		return (newNode);
	}
	free(newNode);
	return (NULL);
}
