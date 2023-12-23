#include "binary_trees.h"
size_t binary_tree_height_recursion(const binary_tree_t *tree);
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to be measured
 *
 * Return: the height or 0 if fail
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height_recursion(tree) - 1);
}

/**
 * binary_tree_height_recursion - measures the height of a binary tree
 * @tree: root node of the tree to measure
 *
 * Return: the height or 0 if fail
 */
size_t binary_tree_height_recursion(const binary_tree_t *tree)
{
	int lheight = 0, rheight = 0;

	if (tree == NULL)
		return (0);
	lheight = binary_tree_height_recursion(tree->left);
	rheight = binary_tree_height_recursion(tree->right);
	if (lheight > rheight)
		return (lheight + 1);
	else
		return (rheight + 1);
}
