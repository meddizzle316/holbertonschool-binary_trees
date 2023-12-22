#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: parent of child
 * @value: new value of node
 *
 * Return: returns a pointer to the current node or null if fail
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;
	newNode->left = NULL;

	if (parent != NULL)
	{
		if (parent->n > value)
		{
			if (parent->left != NULL)
			{
				newNode->left = parent->left;
				parent->left->parent = newNode;
				parent->left = newNode;

			}
			else
			{
				parent->left = newNode;
			}
		}
	return (newNode);
	}
	free(newNode);
	return (NULL);
}
