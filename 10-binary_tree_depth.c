#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a given node of a binary tree
 * @tree: given node of a binary tree
 *
 * Return: depth or 0 if failed
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *current;
	size_t i = 0;

	if (tree == NULL)
		return (0);
	current = tree;
	while (current->parent != NULL)
	{
		current = current->parent;
		i++;
	}
	return (i);
}
