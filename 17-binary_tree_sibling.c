#include "binary_trees.h"
/**
 * binary_tree_sibling  - finds the sibling of a node
 * @node: given node to find the sibling of
 * Return: function pointer to sibling node or null if fails
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *current;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	current = node;
	current = current->parent;
	if (current->right == node)
	{
		return (current->left);
	}
	else
		return (current->right);
}
