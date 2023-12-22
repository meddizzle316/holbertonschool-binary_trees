#include "binary_trees.h"
/**
 * height - calculates the height of a binary tree
 * @node: node from which height is calculated
 *
 * Return: height of specified node
 */
int height(binary_tree_t *node)
{
	int lheight = 0, rheight = 0;

	if (node == NULL)
		return (0);
	lheight = height(node->left);
	rheight = height(node->right);
	if (lheight > rheight)
		return (lheight + 1);
	else
		return (rheight + 1);
}


/**
 * binary_tree_delete - function that deletes entire binary tree
 * @tree: tree to be deleted
 *
 * Return: always void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
