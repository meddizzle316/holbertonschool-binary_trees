#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks to see if node is a leaf
 * @node: given node to check
 *
 * Return: returns 1 if node is leaf otherwise returns 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
