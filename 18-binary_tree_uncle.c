#include "binary_trees.h"
/**
 * binary_tree_uncle  - finds the uncle of a node
 * @node: given node to find the sibling of
 * Return: function pointer to sibling node or null if fails
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *current, *temp = NULL;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	current = node;
	temp = current->parent;
	current = current->parent->parent;
	if (temp == current->right)
	{
		return (current->left);
	}
	else
		return (current->right);
}
