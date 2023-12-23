#include "binary_trees.h"


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

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: root node to be checked
 * Return: 1 if full or 0 if failed or not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int lheight, rheight;

	if (tree == NULL)
		return (1);
	lheight = binary_tree_height_recursion(tree->left);
	rheight = binary_tree_height_recursion(tree->right);
	return (lheight == rheight && binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
