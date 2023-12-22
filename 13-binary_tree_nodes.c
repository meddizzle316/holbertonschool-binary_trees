
#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least one child in binary tree
 * @tree: root node of the tree to count the number of leaves
 *
 * Return: number of nodes with at least one child in tree or 0 if failed
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		return (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1);
	return (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left));
}
